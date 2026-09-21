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
3. [Theoretical Foundations of Computer Architecture](#-theoretical-foundations-of-computer-architecture)
4. [Repository Structure](#-repository-structure)
5. [Simulation & Synthesis Guide](#-simulation--synthesis-guide)
6. [License & Community](#-license--community)

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
1. **At most one RS write per station per cycle.** So two inputs in one cycle never carry
   the same `(Rs_id, Tile_ptr)`. The merge path assigns, not ORs, when two inputs hit the
   same entry; it relies on this.
2. **The table never overflows.** There is no full/ready output and no stall path.
   `TT_ENTRIES` must be sized for the worst-case number of in-flight distinct (tag, tile) pairs.
3. **Physical tag 0 is hard-wired to x0** and is always ready.
4. **A physical tag is broadcast only once per allocation**, so a stale `Rd_in` never
   matches a newer consumer.
5. **Freed slots are reusable only on the next cycle.** Allocation looks at the registered state.
6. **Parameters are only consistent at the defaults** (see Known limitations).

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
