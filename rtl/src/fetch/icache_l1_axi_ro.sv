// -------------------------------------------
// I-Cache L1 (direct-mapped) con refill AXI-Read
// -------------------------------------------
module icache_l1_axi_ro #(
    parameter int XLEN          = 32,    // larghezza istruzione/dato
    parameter int ADDR_BITS     = 32,    // indirizzi a 32 bit
    parameter int LINE_BYTES    = 32,    // dimensione linea (es. 32B) -> quante istruzioni per line
    parameter int NUM_LINES     = 256    // numero linee (direct-mapped => NUM_LINES set)
) (
    input  logic                 clk_i,
    input  logic                 rst_ni,

    // ---------------- Core IF (fetch) ----------------
    input  logic                 if_req_valid_i,
    output logic                 if_req_ready_o,   // pronto ad accettare nuova richiesta
    input  logic [ADDR_BITS-1:0] if_req_addr_i,    // PC (allineato a 4)
    output logic                 if_resp_valid_o,  // risposta valida
    output logic [XLEN-1:0]      if_resp_data_o,   // istruzione
    output logic                 if_resp_hit_o,    // 1 se hit
    output logic                 if_stall_o,       // 1 se IF deve stare fermo (miss in corso)

    // --------------- Memoria (AXI4-Read only, semplificata) ---------------
    output logic                 mem_ar_valid_o,
    input  logic                 mem_ar_ready_i,
    output logic [ADDR_BITS-1:0] mem_ar_addr_o,
    output logic [7:0]           mem_ar_len_o,     // burst length - 1
    output logic [2:0]           mem_ar_size_o,    // log2(bytes per beat). 2 -> 4B
    input  logic                 mem_r_valid_i,
    output logic                 mem_r_ready_o,
    input  logic [XLEN-1:0]      mem_r_data_i,
    input  logic                 mem_r_last_i,
    input  logic [1:0]           mem_r_resp_i      // ignorato (assumo OKAY)
);

    // ----------------- Parametri derivati -----------------
    localparam int WORD_BYTES       = (XLEN/8);                 // = 4
    localparam int LINE_WORDS       = LINE_BYTES / WORD_BYTES;  // es. 32/4 = 8
    localparam int LINE_OFF_BITS    = $clog2(LINE_BYTES);       // es. 5 con 32 istruzioni (offset nella linea)
    localparam int WORD_OFF_BITS    = $clog2(WORD_BYTES);       // es. 2 (offset nel word)
    localparam int WORD_IDX_BITS    = LINE_OFF_BITS - WORD_OFF_BITS; // es. 5-2 = 3 (indice parola in linea)
    localparam int INDEX_BITS       = $clog2(NUM_LINES);        // es. 8 con 256 lines 
    localparam int TAG_BITS         = ADDR_BITS - INDEX_BITS - LINE_OFF_BITS;

    // Scomposizione indirizzo
    function automatic [TAG_BITS-1:0]   addr_tag   (input logic [ADDR_BITS-1:0] a);
        addr_tag = a[ADDR_BITS-1 -: TAG_BITS];
        // I primi TAG_BITS = 19
        // MSB:(ADDR_BITS-INDEX_BITS-LINE_OFF_BITS) -> MBS:32-8-5 = MSB:13
    endfunction
    function automatic [INDEX_BITS-1:0] addr_index (input logic [ADDR_BITS-1:0] a);
        addr_index = a[LINE_OFF_BITS +: INDEX_BITS];
        // da LINE_OFF_BITS a INDEX_BITS
        // es. 13:5
    endfunction
    function automatic [WORD_IDX_BITS-1:0] addr_widx (input logic [ADDR_BITS-1:0] a);
        addr_widx = a[WORD_OFF_BITS +: WORD_IDX_BITS];
        // 5:2 
    endfunction
    function automatic [ADDR_BITS-1:0] line_base (input logic [ADDR_BITS-1:0] a);
        line_base = {a[ADDR_BITS-1:LINE_OFF_BITS], {LINE_OFF_BITS{1'b0}}};
        // a{MSB:5,{0000_0}}
        // azzeriamo gli ultimi 5 bit per allineare l'address con l inizio
        // della cache line
    endfunction
    // Gli ultimi 2 bit dell'address non ci interessano dato che stiamo
    // estraendo 4 byte alla volta 2^2(collegati agli ultimi due bit mancanti)
    // quindi 32 bit (che sono una word)
    // ----------------- Strutture indirizzo -----------------
    // [TAG 19 bit][INDEX 8 bit][OFFSET 5 bit]

    // ----------------- Strutture cache -----------------
    // Data array: NUM_LINES x LINE_WORDS, 32-bit per word
    // In ASIC verrà inferita SRAM; in FPGA BRAM.
    logic [XLEN-1:0] data_array [NUM_LINES-1:0][LINE_WORDS-1:0];

    // Tag e valid
    logic [TAG_BITS-1:0] tag_array   [NUM_LINES-1:0];
    logic                valid_array [NUM_LINES-1:0];

    // ----------------- Registri IF lato core -----------------
    logic [ADDR_BITS-1:0]     req_addr_q;
    logic                     req_holding;   // ho una richiesta in pancia
    logic [INDEX_BITS-1:0]    req_index_q;
    logic [TAG_BITS-1:0]      req_tag_q;
    logic [WORD_IDX_BITS-1:0] req_widx_q;

    // ----------------- Stato refill -----------------
    typedef enum logic [1:0] {
        S_IDLE,
        S_LOOKUP,
        S_MISS_REQ,
        S_REFILL
    } state_e;

    state_e state_q, state_d;

    logic               hit_d, hit_q;
    logic [XLEN-1:0]    hit_data_d, hit_data_q;

    logic [ADDR_BITS-1:0] miss_base_addr_q;
    logic [INDEX_BITS-1:0] miss_index_q;
    logic [TAG_BITS-1:0]   miss_tag_q;
    logic [$clog2(LINE_WORDS)-1:0] refill_cnt_q;

    // ----------------- Default comb -----------------
    always_comb begin
        // default uscite core
        if_req_ready_o  = (state_q == S_IDLE) || (state_q == S_LOOKUP);
        if_resp_valid_o = 1'b0;
        if_resp_data_o  = '0;
        if_resp_hit_o   = 1'b0;
        if_stall_o      = (state_q == S_MISS_REQ) || (state_q == S_REFILL);

        // default AXI
        mem_ar_valid_o  = 1'b0;
        mem_ar_addr_o   = '0;
        mem_ar_len_o    = LINE_WORDS - 1;
        mem_ar_size_o   = $clog2(WORD_BYTES); // 2 -> 4B
        mem_r_ready_o   = 1'b1; // sempre pronti a ricevere dati

        // next-state di base
        state_d    = state_q;
        hit_d      = 1'b0;
        hit_data_d = '0;

        unique case (state_q)
            S_IDLE: begin
                // accetta una richiesta IF
                if (if_req_valid_i && if_req_ready_o) begin
                    state_d = S_LOOKUP;
                end
            end

            S_LOOKUP: begin
                // Controllo hit con richiesta attuale (registrata)
                // Accesso "1-cycle": leggiamo il dato al ciclo successivo (registrato)
                if (valid_array[req_index_q] && (tag_array[req_index_q] == req_tag_q)) begin
                    hit_d      = 1'b1;
                    hit_data_d = data_array[req_index_q][req_widx_q];
                    // consegno risposta
                    // (risposta registrata al termine del ciclo)
                end else begin
                    // MISS: richiedi refill
                    state_d = S_MISS_REQ;
                end
            end

            S_MISS_REQ: begin
                mem_ar_valid_o = 1'b1;
                mem_ar_addr_o  = miss_base_addr_q;
                if (mem_ar_valid_o && mem_ar_ready_i) begin
                    state_d = S_REFILL;
                end
            end

            S_REFILL: begin
                // Scrivo parole man mano che arrivano
                // Controllo terminazione burst con r_last
                if (mem_r_valid_i) begin
                    // Scrittura una word nella linea corrente
                    // NB: uso refill_cnt_q come indice interno alla linea
                    // la posizione di linea è miss_index_q
                    // data_array è 2D: [linea][word]
                end
                if (mem_r_valid_i && mem_r_last_i) begin
                    // Al termine: set tag/valid e torniamo a LOOKUP per servire la req
                    // (potresti consegnare direttamente la word richiesta se coincide)
                    // Torno a LOOKUP per uniformità
                    // Nota: req_* rimangono fermi durante refill
                end
            end

            default: begin
                state_d = S_IDLE;
            end
        endcase
    end

    // ----------------- Sequenziale -----------------
    integer wi;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state_q        <= S_IDLE;
            req_holding    <= 1'b0;
            req_addr_q     <= '0;
            req_index_q    <= '0;
            req_tag_q      <= '0;
            req_widx_q     <= '0;
            hit_q          <= 1'b0;
            hit_data_q     <= '0;

            miss_base_addr_q <= '0;
            miss_index_q     <= '0;
            miss_tag_q       <= '0;
            refill_cnt_q     <= '0;

            // Invalida cache al reset
            for (wi = 0; wi < NUM_LINES; wi++) begin
                valid_array[wi] <= 1'b0;
                tag_array[wi]   <= '0;
            end
        end else begin
            state_q    <= state_d;
            hit_q      <= hit_d;
            hit_data_q <= hit_data_d;

            // Lato core: latching della richiesta
            if ((state_q == S_IDLE || state_q == S_LOOKUP) && if_req_valid_i && if_req_ready_o) begin
                req_holding <= 1'b1;
                req_addr_q  <= if_req_addr_i;
                req_index_q <= addr_index(if_req_addr_i);
                req_tag_q   <= addr_tag(if_req_addr_i);
                req_widx_q  <= addr_widx(if_req_addr_i);

                // Prepara info per MISS (se servirà)
                miss_base_addr_q <= line_base(if_req_addr_i);
                miss_index_q     <= addr_index(if_req_addr_i);
                miss_tag_q       <= addr_tag(if_req_addr_i);
                refill_cnt_q     <= '0;
            end

            // Refill: scrivo i dati mano a mano che arrivano
            if (state_q == S_REFILL && mem_r_valid_i) begin
                data_array[miss_index_q][refill_cnt_q] <= mem_r_data_i;
                refill_cnt_q <= refill_cnt_q + 1'b1;

                if (mem_r_last_i) begin
                    // chiudo linea
                    tag_array[miss_index_q]   <= miss_tag_q;
                    valid_array[miss_index_q] <= 1'b1;
                end
            end

            // Risposta core sul ciclo dopo LOOKUP hit
            if (state_q == S_LOOKUP) begin
                if (hit_d) begin
                    if_resp_valid_o <= 1'b1;
                    if_resp_hit_o   <= 1'b1;
                    if_resp_data_o  <= hit_data_d;
                    req_holding   <= 1'b0; // richiesta servita
                    // Ritorno a IDLE (o resta in LOOKUP per pipelining) al prossimo ciclo
                    state_q       <= S_IDLE;
                end else begin
                    if_resp_valid_o <= 1'b0;
                    if_resp_hit_o   <= 1'b0;
                end
            end else begin
                // default
                if_resp_valid_o <= 1'b0;
                if_resp_hit_o   <= 1'b0;
            end

            // Transizioni dopo refill
            if (state_q == S_REFILL && mem_r_valid_i && mem_r_last_i) begin
                // Re-try del lookup per la richiesta corrente
                state_q <= S_LOOKUP;
            end
        end
    end

endmodule
