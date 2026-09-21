# Shared paths and files among RTL sources

# Verilator Variables
VERILATOR_INCLUDE 		  = /usr/share/verilator/include
VERILATOR_INCLUDE_VLTSTD  = /usr/share/verilator/include/vltstd/

# Lint-off warning
VERILATOR_CENTRAL_WARNINGSBYPASS  = -Wno-PINCONNECTEMPTY 	\
							-Wno-MODDUP 			\
							-Wno-DECLFILENAME		\
							-Wno-GENUNNAMED			\
							-Wno-WIDTHEXPAND		\
							-Wno-UNUSEDPARAM		\
							#--waiver-output waiver_build_pt1.txt		

# Dependencies
COMMON_CELLS_DIR = ${RTL_ROOT}/dep/common_cells
COMMON_CELLS_SVH = ${COMMON_CELLS_DIR}/svh
COMMON_CELLS_PKG := $(shell find ${COMMON_CELLS_DIR}/pkg -type f) 
COMMON_CELLS_RTL := $(shell find ${COMMON_CELLS_DIR} -type f) 

AXI_DIR = ${RTL_ROOT}/dep/axi
AXI_SVH = ${AXI_DIR}/svh
AXI_PKG := $(shell find ${AXI_DIR}/pkg -type f) 
AXI_RTL := $(shell find ${AXI_DIR} -type f) 

DEP_SVH = -I${COMMON_CELLS_SVH} -I${AXI_SVH} 
DEP_PKG = ${COMMON_CELLS_PKG} ${AXI_PKG} 
DEP_RTL = ${COMMON_CELLS_RTL} ${AXI_RTL} 

LOCAL_PRIMITIVES := $(shell find ${WORK_ROOT} -type d -name "primitives")
LOCAL_MODULES_OOOEX := $(shell find ${WORK_ROOT} -type d -name "ooo_extension" | head -n 1)
LOCAL_MODULES_RENAME := $(shell find ${WORK_ROOT} -type d -name "rename" | head -n 1)
LOCAL_MODULES_DECODE := $(shell find ${WORK_ROOT} -type d -name "decode" | head -n 1)
LOCAL_MODULES_FETCH := $(shell find ${WORK_ROOT} -type d -name "fetch" | head -n 1)
