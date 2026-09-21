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

### 2. The TileTable Dependency Engine

The **TileTable** is a flagship innovation of this design, introduced to optimize resource allocation and hazard checking:

* **Grid-Based Dependency Tracking**: Rather than relying exclusively on a monolithic Register Alias Table ($RAT$), the TileTable organizes mapping between architectural registers ($R_0, R_1, \dots, R_{31}$) and physical registers ($P_0, P_1, \dots, P_N$) inside a 2D tile matrix.
* **Parallel Hardware Hazard Mitigation**: The spatial grid architecture enables simultaneous detection of $RAW$ (Read-After-Write), $WAR$ (Write-After-Read), and $WAW$ (Write-After-Write) hazards with optimized $O(N \cdot M)$ area complexity, significantly reducing critical path latency during high-width Dispatch/Issue cycles.

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