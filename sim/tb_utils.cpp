#include <bit>
#include <cstdint>
#include <iostream>
#include <chrono>
#include <iomanip>
#include <array>
#include <vector>
#include "logger.cpp"
#include <unordered_set>
#include <type_traits>

#ifndef NRALUOP
#define NRALUOP 8
#define ALUcontrol_N std::log2(NRALUOP)
#endif

#ifndef N_UOP_CYCLE
#define N_UOP_CYCLE 4
#endif

#define DEBUG 0
using namespace std;

template <class T>
std::vector<T> make_unique_integers(const std::vector<T>& values) {
    static_assert(std::is_integral<T>::value, "Richiede un tipo intero");

    std::unordered_set<T> used;
    used.reserve(values.size() * 2);

    std::vector<T> out;
    out.reserve(values.size());

    for (T v : values) {
        T x = v;
        // incrementa finché troviamo un valore libero
        while (used.find(x) != used.end()) {
            // Attenzione: possibili overflow se x == std::numeric_limits<T>::max()
            // In tal caso, potresti scegliere una strategia diversa (vedi variante sotto).
            x = x + T(1);
        }
        out.push_back(x);
        used.insert(x);
    }
    return out;
}

#ifdef OOO_EXEC
void print_rs2 (Vooo_extension *top) {
    for (int i = 0; i < N_UOP_CYCLE; ++i) {
	cout << "Rs1_" << i << ": " << int(top->Rs1_in[i]) << " ";
    }
    cout << endl;    
}

void print_rs1 (Vooo_extension *top) {
    for (int i = 0; i < N_UOP_CYCLE; ++i) {
	cout << "Rs2_" << i << ": " << int(top->Rs2_in[i]) << " ";
    }
    cout << endl;    
}
#endif

#include <algorithm>

int gen_rand_un(int upper_range, int bitwidth, uint32_t seed) {
    if (bitwidth <= 0) return 0;
    const uint64_t max_by_bits = (bitwidth >= 64) ? ~0ULL : ((1ULL << bitwidth) - 1ULL);
    if (max_by_bits < static_cast<uint64_t>(upper_range)) {
        std::cerr << "[ WARNING ] : Given upper range higher than maximum representable with "
                  << bitwidth << " bits. Range will be clipped.\n";
    }

    const uint64_t hi = std::min<uint64_t>(upper_range, max_by_bits);
    if (hi < 1) return 0;  // niente range valido

    static std::mt19937 gen;         // PRNG persistente
    static bool seeded = false;
    if (!seeded) {
        gen.seed(seed);              // seed deterministico
        seeded = true;
    }

    std::uniform_int_distribution<uint64_t> dist(1, hi);  // [1, hi], inclusivo
    uint64_t x = dist(gen);
    return static_cast<int>(x);
}

array<uint64_t, 8> rs_entry_extract (uint32_t* rs_entry) {

    // pos 1: Rs1
    // pos 2: Valid1
    // pos 3: Rs2 
    // pos 4: Valid2
    // pos 5: Rd 
    // pos 6: Imm
    // pos 7: is_imm
    // pos 8: Entry_free


    int WIDTHS[8] = {32,1,32,1,32,12,1,1};    
    array<uint64_t, 8> out{};
    int base = 0;
    for(int i = 0; i < 8; i++) {
	out[i] = partsel_wide64(rs_entry, base, WIDTHS[i]);
	base += WIDTHS[i];
    }
    return out;
}

static const int NUM_FIELDS = 8;
vector<array<uint64_t, NUM_FIELDS>> rs_entry_extract_all(uint32_t* rs_entry, int depth) {
    static const int WIDTHS[NUM_FIELDS] = {32,1,32,1,32,12,1,1};

    vector<array<uint64_t, NUM_FIELDS>> results;
    results.reserve(depth);

    for (int e = 0; e < depth; ++e) {

        array<uint64_t, NUM_FIELDS> out{};
        int base = 0;
        int RS_ENTRY_BASE = 112 * e;

        for (int i = 0; i < NUM_FIELDS; ++i) {
            out[i] = partsel_wide64(rs_entry,
                                    RS_ENTRY_BASE + base,
                                    WIDTHS[i]);
            base += WIDTHS[i];
        }

        results.push_back(out);
    }

    return results;
}


void print_rs_entry(array<uint64_t, NUM_FIELDS> rs_entry) {
    string labels_o[8] = {"Tag1", "Valid1", "Tag2", "Valid2", "Rd", "Imm", "is_imm", "Entry_free"};
    
    for(int i = 0; i < 8; i++) {
	if(i==0) {
	    log_info() << dec <<labels_o[i] << "= "  << rs_entry[i] << ", ";
	} else {
	    cout << dec << labels_o[i] << "= "  << rs_entry[i] << ", ";
	}
    }
    log_info() << endl;
}

void print_wide64(uint32_t* sign, int for_limit, int extract_bits, int base_off, string signal_name, int loop_base_off) {
    for ( int i = 0 ; i < for_limit; i++) {
	//log_info() << "  PRF_entry "<< i <<" : " << PRF_entry[i] << endl;
	int32_t extracted_sign = partsel_wide64(sign, loop_base_off*i + base_off , extract_bits);
	log_info() << hex << signal_name << i << " value of: " << extracted_sign << " -> ";
	print_bits(extracted_sign);
	log_info() << endl;
    }
}

void print_wide32(uint32_t _sign, int for_limit, int _extract_bits, int base_off, string signal_name, int loop_base_off) {
    for ( int i = 0 ; i < for_limit; i++) {
	//log_info() << "  PRF_entry "<< i <<" : " << PRF_entry[i] << endl;
	uint32_t extracted_sign = extract_bits(_sign, loop_base_off*i + base_off , _extract_bits);
	log_info() << hex << signal_name << " " << i << " value of: " << extracted_sign << " -> ";
	print_bits(extracted_sign);
	log_info() << endl;
    }
}


#include <cstdint>
#include <vector>
#include <stdexcept>
#include <algorithm>

using u128 = __uint128_t;

// v[0] = LSB ... v[n-1] = MSB
static inline u128 pack_u8s_to_u128_le(const std::vector<uint8_t>& v) {
    if (v.size() > 16)
        throw std::invalid_argument("Troppi byte: massimo 16 per 128 bit");
    u128 acc = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        acc |= ( (u128)v[i] ) << (8 * i);
    }
    return acc;
}

// v[0] = MSB ... v[n-1] = LSB
static inline u128 pack_u8s_to_u128_be(const std::vector<uint8_t>& v) {
    if (v.size() > 16)
        throw std::invalid_argument("Troppi byte: massimo 16 per 128 bit");
    u128 acc = 0;
    const size_t n = v.size();
    for (size_t i = 0; i < n; ++i) {
        size_t shift_bytes = (n - 1 - i);
        acc |= ( (u128)v[i] ) << (8 * shift_bytes);
    }
    return acc;
}
