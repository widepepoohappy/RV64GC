# RISC-VOOO: High-Performance Out-of-Order RISC-V Processor Core

**RISC-VOOO** is an advanced SystemVerilog implementation of a high-performance, dynamic **Out-of-Order (OoO)** execution microprocessor based on the **RISC-V** ISA. Designed to maximize Instruction-Level Parallelism ($ILP$), the core features novel mechanisms for micro-operation ($\mu\text{op}$) translation, dynamic dependency tracking through a matrix-like **TileTable**, and a decoupled **AMBA AXI4** system memory interface.

---

## 📑 Table of Contents

1. [Architectural Overview](#-architectural-overview)
2. [Microarchitectural Highlights & Key Innovations](#-microarchitectural-highlights--key-innovations)
   * [1. Variable-Length Decompression & $\mu\text{op}$ Generation (Blob Decoder / `ID0`)](#1-variable-length-decompression--%CE%BCop-generation-blob-decoder--id0)
   * [2. The TileTable Dependency Engine](#2-the-tiletable-dependency-engine)
   * [3. Decoupled AXI4 Memory Interface & Store Forwarding](#3-decoupled-axi4-memory-interface--store-forwarding)
   * [4. Execution Pipeline & Reorder Buffer (ROB)](#4-execution-pipeline--reorder-buffer-rob)
3. [Two-Level Register Rename (`rn_stage`)](#-two-level-register-rename-rn_stage)
4. [Theoretical Foundations of Computer Architecture](#-theoretical-foundations-of-computer-architecture)
5. [Repository Structure](#-repository-structure)
6. [Simulation & Synthesis Guide](#-simulation--synthesis-guide)
7. [License & Community](#-license--community)

---

## 🏛 Architectural Overview

While conventional open-source RISC-V cores rely on in-order 5-stage pipelines, **RISC-VOOO** bypasses sequential control bottlenecks by implementing a superscalar Out-of-Order execution model based on **Tomasulo's Algorithm** paired with a **Reorder Buffer (ROB)** to ensure in-order commit and precise exception handling.

```
   +-------------------+      +---------------------+      +---------------------+
   |    Fetch Stage    | ---> |   Blob Decoder ID0  | ---> |   Rename & Dispatch |
   |  (PC & Prefetch)  |      |  (RVC Decompressor) |      |   (TileTable Mux)   |
   +-------------------+      +---------------------+      +---------------------+
                                                                      |
                                                                      v
   +-------------------+      +---------------------+      +---------------------+
   |  Commit & Retire  | <--- |   Execution Units   | <--- | Reservation Stations|
   |   (ROB Engine)    |      | (ALU, LSU, Branch)  |      |    (Issue Window)   |
   +-------------------+      +---------------------+      +---------------------+
```

---

## 🚀 Microarchitectural Highlights & Key Innovations

### 1. Variable-Length Decompression & $\mu\text{op}$ Generation (Blob Decoder / `ID0`)

The frontend decode module `ID0` handles the **RISC-V C** (Compressed 16-bit instructions) extension via a **Blob Decoder**:

* **Unaligned Stream Alignment**: The decoder ingests raw instruction "blobs" from the prefetch queue, dynamically identifying and parsing mixed 16-bit and 32-bit instructions without introducing fetch pipeline bubbles.
* **Micro-operation ($\mu\text{op}$) Normalization**: Complex macro-instructions are expanded into single or simple multi-$\mu\text{ops}$ with uniform control formats. This simplifies downstream register renaming and reservation station allocation by keeping the issue stage homogeneous.

### 2. The TileTable Wakeup Engine

The TileTable (`rtl/src/ooo_extension/TileTable.sv`) is the operand-wakeup network of the
out-of-order back end. Renaming has already removed WAR/WAW hazards; the TileTable resolves
the remaining RAW dependencies by telling the reservation stations which source operands
became ready. It replaces the per-slot tag comparators of a classic Tomasulo RS with a small
shared CAM of *pending wakeups*.

#### Tiles
The RS operand slots form a grid: `NRALUOP` stations × `RES_DEPTH` entries × `RES_WIDTH_DIM`
(=2) operands; with the defaults that is 8 × 8 × 2 = 128 cells. The grid is split into
**tiles** of `CELL_PER_TILE` (=4) cells, i.e. 2 consecutive RS entries × {Rs1, Rs2}.
A TileTable entry addresses one tile, not one cell:

| Field       | Width (default) | Meaning                                               |
|-------------|-----------------|-------------------------------------------------------|
| `Valid`     | 1               | entry in use                                          |
| `Rs_id`     | `ADDR_WIDTH` (5)| physical source tag being waited on                   |
| `Tile_ptr`  | 3 + 2           | `{RS id, tile index within the RS}`                   |
| `Tile_view` | 4               | one-hot/multi-hot mask of the waiting cells in the tile|

Cell order inside a tile is `{entry(2k+1).Rs2, entry(2k+1).Rs1, entry(2k).Rs2, entry(2k).Rs1}`
(LSB = Rs1 of the even entry). One entry can therefore wake up to 4 operands that wait on
the same physical register in the same tile. With `TT_ENTRIES = 20` the table tracks 20
(tag, tile) pairs rather than 128 per-cell comparators.

#### Insertion (Encoder → TileTable)
When a µop is written into an RS, `Encoder` builds up to two entries (Rs1, Rs2):
- `Tile_ptr = (RS_id << 2) + (entry_idx >> 1)`, `Tile_view = 01/10 << 2·(entry_idx & 1)`.
- If `Rs1 == Rs2`, a single entry with view `11` is emitted.
- An entry is **not** inserted when the operand is already valid in the PRF
  (`PRF_ready_valid_o`), when Rs2 is an immediate, or when `Rs_id == 0` (x0).

Inside the TileTable, each incoming entry is CAM-matched on `(Rs_id, Tile_ptr)`:
- **hit**: its `Tile_view` is OR-merged into the existing entry (`merge_vects`);
- **miss**: a free slot is allocated. `N_IN_ENTRY_PORTS` (= 2·NRALUOP) chained
  `rr_arb_tree`s (fixed priority, `rr_i = 0`) each take the lowest free slot not already
  claimed by a lower-numbered port.

#### Wakeup (TileTable → Res_valid_generation → RS)
Every cycle, the `NRALUOP` destination tags leaving the ALUs (`Rd_in`) are compared against all
entries. On a hit the entry is emitted on its own `Clos_pkg_o[j]` port (`Valid, Tile_ptr,
Tile_view`) and cleared in the same cycle. `Res_valid_generation` decodes
`Tile_ptr` into an RS id and a bit offset (`tile·4`) and ORs `Tile_view` into that station's
16-bit `Tag_valid_in` vector. Each RS then sets the corresponding `RAT_Entry[k].Valid` bits.
One output port per entry means all entries can fire in the same cycle.

If an incoming entry's tag matches a tag being broadcast in the same cycle, the entry is
dropped rather than stored; the operand is expected to be marked valid by the bypass in
`ooo_extension.sv`.

The `Clos_pkg_t` name reflects the intended scaling path: wakeup packets routed to the
stations over the Clos network in `rtl/src/Clos_NoC/`. Today they are decoded directly by
`Res_valid_generation`.

#### Design assumptions
1. **Programs do not depend on single RS**. It is assumed that RSs are not frequently shared across local section of reserver stations.
    This imply a sparse matrix (that can be seen as the grouped reserve stations), which non zero elements per source registers can be
    represented by the view of the tile.
3. **At most one RS write per station per cycle.** So two inputs in one cycle never carry
   the same `(Rs_id, Tile_ptr)`. The merge path assigns, not ORs, when two inputs hit the
   same entry; it relies on this.
4. **The table never overflows.** There is no full/ready output and no stall path.
   `TT_ENTRIES` must be sized for the worst-case number of in-flight distinct (tag, tile) pairs.
5. **Physical tag 0 is hard-wired to x0** and is always ready.
6. **A physical tag is broadcast only once per allocation**, so a stale `Rd_in` never
   matches a newer consumer.
7. **Freed slots are reusable only on the next cycle.** Allocation looks at the registered state.
8. **Parameters are only consistent at the defaults** (see Known limitations).


### 3. Decoupled AXI4 Memory Interface & Store Forwarding

To decouple processor execution speed from main memory latency, the Load/Store Unit ($LSU$) natively exposes a full **AMBA AXI4 Master** interface:

* **Independent 5-Channel Operation**: Fully independent Read Address ($AR$), Read Data ($R$), Write Address ($AW$), Write Data ($W$), and Write Response ($B$) channels.
* **Outstanding Memory Transactions**: Multi-tag transaction tracking ($ARID$ / $AWID$) allows multiple in-flight memory requests to proceed concurrently.
* **Store-to-Load Forwarding**: When a Load request matches an address currently residing in the uncommitted Store Buffer, data is forwarded directly to the execution pipeline without waiting for a memory bus round-trip.

### 4. Execution Pipeline & Reorder Buffer (ROB)

* **Superscalar Out-of-Order Issue**: Ready $\mu\text{ops}$ (those whose operands are available via the *Common Data Bus* or physical register file) are issued out-of-order to parallel execution units.
* **Speculative Execution**: Branch predictions are validated in the Branch Execution Unit ($BEU$), triggering instantaneous state recovery upon a misprediction.
* **Precise Exception Guarantees**: State updates become permanent strictly in program order through the Reorder Buffer ($ROB$).

---

## 🔁 Two-Level Register Rename (`rn_stage`)

RISC-VOOO cracks macro-instructions into $\mu\text{ops}$ in the uROM, so renaming has to serve two different kinds of destinations: **architectural** registers, which are visible to the ISA and live until commit, and **micro-architectural temporaries**, which exist only to pass values between the $\mu\text{ops}$ of a single cracked sequence. The rename stage is therefore split into two levels.

| Level | Map | Renames | Lifetime of a mapping | Checkpoint on misprediction |
|---|---|---|---|---|
| **L1 — `FRM`** | Front Rename Map | Architectural registers of the macro-instruction | Until the producing instruction commits | **Required** |
| **L2 — `FRMuop`** | $\mu\text{op}$ Rename Map | Temporaries internal to a cracked sequence | Until the last $\mu\text{op}$ of the sequence consumes it | **Not required** — no architectural state |

The two namespaces are disjoint, so the two lookups are **parallel**, selected by the namespace of each source operand. The split is not a cascade and costs no extra critical path.

**Why split at all:**

* **Checkpoint cost.** Only L1 holds architectural state, so branch recovery snapshots L1 alone. L2 contents are dead past the sequence and can be discarded.
* **Physical register pressure.** A temporary is released as soon as the consuming $\mu\text{op}$ of its sequence retires it, not at commit. Shorter lifetimes mean a given `PRF_DEPTH` sustains more in-flight instructions.
* **Port count.** L1 write ports scale with macro-instructions per cycle; only L2 needs the full $\mu\text{op}$ width.
* **In-sequence forwarding.** $\mu\text{ops}$ of one sequence are dependent by construction: $u_1$ consumes the tag $u_0$ was just given in the same cycle. That forwarding is confined to L2 and never touches architectural mappings.

### Source Files

| File | Level | Role | Status |
|---|---|---|---|
| `rtl/src/rename/rn_stage/rn_stage.sv` | — | Top level: free list + `FRMuop_u` instance | Implemented |
| `rtl/src/rename/free_list.sv` | — | Physical register allocation, with architectural/temporary release policy | Implemented |
| `rtl/src/ooo_extension/PRF.sv` | L2 | Reused as the $\mu\text{op}$ map (`RAT_t` entries) and as the in-group forwarding network | Implemented |
| `rtl/src/rename/FRM.sv` | L1 | Architectural map | **Stub** |
| `sim/rename_sim/golden_model.py` | L1 + L2 | Reference model of the complete two-level scheme | Partial |
| `sim/rename_sim/testbench/` | — | Verilator testbench | Trace only, no checks |

### Parameters

| Parameter | Default | Meaning |
|---|---|---|
| `N_UOP_CYCLE` | 4 | Rename width ($\mu\text{ops}$ per cycle) |
| `N_FREE_PER_CYCLE` | 1 | Physical registers released per cycle |
| `PRF_DEPTH` | 32 | Physical registers |
| `ADDR_WIDTH` | $\lceil\log_2 \text{PRF\_DEPTH}\rceil = 5$ | Physical tag width |

### Interface

| Port | Dir | Width | Description |
|---|---|---|---|
| `Rs1_i`, `Rs2_i`, `Rd_i` | in | `N_UOP_CYCLE × ADDR_WIDTH` | Source / destination register of each $\mu\text{op}$ |
| `is_arch` | in | `N_UOP_CYCLE` | Destination is architectural (1) or a temporary (0) |
| `free_req_i` | in | `N_FREE_PER_CYCLE × ADDR_WIDTH` | Physical tag to release (0 = no request) |
| `free_req_arch` | in | `N_UOP_CYCLE` | Release originates from commit (1) or from sequence completion (0) |
| `Rs1_rn_o`, `Rs2_rn_o`, `Rd_rn_o` | out | `N_UOP_CYCLE × ADDR_WIDTH` | Renamed tags |
| `clk_i`, `rst_ni`, `flush_i`, `en_i` | in | 1 | Clock, active-low reset, flush, stage enable |

Rename is combinational: tags are produced in the cycle the $\mu\text{ops}$ arrive; the free list and the maps update on the next rising edge while `en_i` is high.

### Datapath

```
                                  ┌──────────── L1: FRM (architectural map) ─────────┐
   arch. sources ────────────────►│  arch reg  ->  {Valid, PhysTag}                  │──┐
                                  │  checkpointed / restored on misprediction        │  │
                                  └──────────────────────────────────────────────────┘  │ namespace
                                                                                         ├─ mux ──► Rs1_rn_o / Rs2_rn_o
                                  ┌──────────── L2: FRMuop (uop map) ────────────────┐  │
   temporaries ──────────────────►│  temp id   ->  {Valid, PhysTag}                  │──┘
                                  │  + same-cycle forwarding inside the sequence     │
                                  └──────────────────────────────────────────────────┘
                                                        ▲
                Rd_i ──(|Rd_i != 0)──► pull_req ──►┌────┴────────┐
          free_req_i / free_req_arch ─────────────►│  free_list  │──► Rd_rn_o
                                                   │ N chained   │
                                                   │ arbiters    │
                                                   └─────────────┘
```

1. **Destination request.** `Rd_pull_req[i] = |Rd_i[i]` — a $\mu\text{op}$ writing `x0` consumes no physical register.
2. **Allocation.** The free list returns one distinct physical tag per requesting slot: `Rd_rn_o`.
3. **Source lookup.** Read port `2i` resolves `Rs1_i[i]`, port `2i+1` resolves `Rs2_i[i]`, against L1 or L2 according to the operand namespace.
4. **Map update.** Write port `i` stores `{Valid=1, Tag=Rd_rn[i]}`. Temporaries update L2; the architectural destination of the sequence updates L1.
5. **In-sequence forwarding.** When a source is produced by an earlier $\mu\text{op}$ of the same cycle group, the value is forwarded from the write port instead of the stored entry (`PRF.sv:58-70`).

### Free List

Shared physical pool for both levels, with a per-register class bit so release policy can differ.

* `free_list_arr[p] = 1` → physical register `p` is allocated. Reset: all free.
* `free_list_arch[p] = 1` → `p` holds an architectural destination, so it is released only at commit.

**Selection.** `N_UOP_CYCLE` chained `rr_arb_tree` instances. Arbiter 0 sees `~free_list_arr`; arbiter `i` sees `~free_list_arr & arbitring_mask[i-1]`, the mask clearing every index already granted, so the slots receive distinct registers. Only `idx_o` is used and `gnt_i` is tied off, so `rr_q` stays 0 and each tree behaves as a find-first-free priority encoder.

**Allocation** (`free_list.sv:88-98`): set `free_list_arr[idx]`, and `free_list_arch[idx]` when `is_arch[i]`.

**Release** (`free_list.sv:99-113`): clear `free_list_arr[tag]` only when `free_req_arch` matches the stored class bit — commit releases architectural registers, sequence completion releases temporaries. The request carries the **physical** tag, not the architectural index.

### Map Entry

```systemverilog
typedef struct packed {
    logic                   Valid;
    logic [`ADDR_WIDTH-1:0] Tag;
} RAT_t;   // 6 bits at PRF_DEPTH = 32
```

### Implementation Status

**Done**

* L2 map and its forwarding network (`rn_stage.sv:72-90`, `PRF.sv:58-70`).
* Free list with the architectural / temporary release policy (`free_list.sv`).
* Verilator lint target and a tracing testbench.

**To do**

| Item | Where |
|---|---|
| L1 map: body, checkpoint file, restore on `flush_i` | `FRM.sv` is an empty stub |
| Separate index space for temporaries (currently aliased onto the 32 architectural indices, so two in-flight sequences can collide) | `rn_stage.sv` port widths |
| Sequence tag / last-$\mu\text{op}$ marker and the `is_arch` bit emitted by the uROM | `urom.sv` output carries neither; `core.sv:71-73` declares `RN_is_arch` but never drives it |
| Age-ordered forwarding: restrict the bypass to writers older than the reader and select the youngest of those; the forwarding source is currently selected by read-port index | `PRF.sv:63-70` |
| Free-list exhaustion detection and backpressure — with fewer free registers than requesting slots, several slots receive the same tag | `free_list.sv:76-83` |
| Reserve physical register 0: it is allocatable today, and `free_req_i = 0` means "no request", so it can never be released | `free_list.sv:58, 100` |
| Gate the map write enable with `en_i` (the map currently updates while the free list does not) | `PRF.sv:48-52` |
| Clear `free_list_arch[p]` on reallocation instead of leaving it set | `free_list.sv:94-96` |
| Previous-mapping output so the ROB can release the superseded architectural tag at commit | `rn_stage.sv` port list |
| Finish the `rn_stage` instantiation in the core (incomplete `always_comb`, trailing comma, missing `;`) | `core.sv:166-191` |
| Self-checking testbench against the two-level golden model | `sim/rename_sim/` |

### Simulation

```bash
source settings.sh
make -C rtl/src/rename/rn_stage/mk lint     # Verilator lint
make -C sim/rename_sim/testbench exec       # build Vrn_stage testbench
```

---

## 🔬 Theoretical Foundations of Computer Architecture

The microarchitecture of RISC-VOOO directly implements key principles from modern computer architecture theory:

1. **Instruction-Level Parallelism ($ILP$) Optimization**:
   The execution engine targets a Cycles Per Instruction ($CPI$) value below unity ($CPI < 1$) in superscalar workloads. CPU execution time is dictated by:

   $$\text{CPU Time} = \text{Instruction Count} \times CPI \times t_{\text{clock}}$$

   By executing non-dependent instructions out of order, pipeline stalls due to functional unit latency are minimized.

2. **Dynamic Hazard Resolution (Tomasulo Framework)**:
   False data dependencies ($WAR$ and $WAW$) are entirely eliminated via physical register renaming:

   $$\text{ArchReg} \xrightarrow{\text{RAT / TileTable}} \text{PhysReg}$$

   True data dependencies ($RAW$) are resolved dynamically by broadcasting result tags over the **Common Data Bus ($CDB$)**, allowing waiting Reservation Stations to snoop operands directly.

3. **Decoupled Execution Pipeline**:

   $$I_{\text{fetch}} \to I_{\text{decode}} \to I_{\text{dispatch (In-Order)}} \to I_{\text{execute (Out-of-Order)}} \to I_{\text{commit (In-Order)}}$$

   This separation ensures that despite out-of-order execution, the machine maintains a consistent architectural state (*precise state*) required for precise exception handling and interrupt servicing.

---

## 📁 Repository Structure

```
RISC-VOOO/
├── rtl/
│   ├── fetch/
│   │   ├── pc_control.sv       # Program Counter management & Branch Predictor
│   │   └── fetch_buffer.sv     # Prefetch buffer for variable-length streams
│   ├── decode/
│   │   ├── id0_blob_decoder.sv # Blob Decoder & RVC Decompression module
│   │   └── uop_generator.sv    # Macro-to-uop decomposition engine
│   ├── rename_dispatch/
│   │   ├── tiletable.sv        # TileTable hardware grid for resource & hazard tracking
│   │   └── rat.sv              # Register Alias Table (Architectural -> Physical)
│   ├── execute/
│   │   ├── alu.sv              # Arithmetic Logic Unit
│   │   ├── branch_unit.sv      # Branch evaluation & misprediction recovery
│   │   └── lsu.sv              # Load/Store Unit with Store-to-Load Forwarding
│   ├── memory/
│   │   └── axi4_master.sv      # AMBA AXI4 Bus Master Interface
│   └── rob/
│       └── reorder_buffer.sv   # Reorder Buffer for in-order commit
├── sim/
│   ├── tb_top.sv               # Top-level SystemVerilog testbench
│   └── testcases/              # RISC-V C/Assembly test suites
└── README.md                   # Project Documentation
```

---

## 🛠 Simulation & Synthesis Guide

### Prerequisites

* **Verilator** ($\ge 4.200$) or **ModelSim / QuestaSim**
* **RISC-V Toolchain** (`riscv64-unknown-elf-gcc` or `riscv32-unknown-elf-gcc`)
* **Python 3.x** (for memory image conversion scripts)

### Building & Simulating with Verilator

1. **Compile the RTL Hardware Description**:
   ```bash
   verilator -Wall --cc --trace --exe sim/tb_top.sv rtl/**/*.sv --top-module tb_top
   make -C obj_dir -f Vtb_top.mk Vtb_top
   ```

2. **Execute Testbench**:
   ```bash
   ./obj_dir/Vtb_top
   ```

3. **Waveform Analysis**:
   ```bash
   gtkwave wave.vcd
   ```

---

## 📄 License & Community

Distributed under an Open Source License. Contributions, architecture reviews, and pull requests regarding TileTable optimization or AXI4 throughput enhancements are welcome!
