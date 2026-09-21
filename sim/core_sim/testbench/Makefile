
MOD_NAME := core
MOD_NAME_MK := $(shell find ${WORK_ROOT}/rtl/src/ -type f -name "${MOD_NAME}.mk")
WAIVERS := $(shell find ${WORK_ROOT}/rtl/src/ -type f -name "waiver_build*")

include ${MOD_NAME_MK}

VERILATOR_UTILS := ${WORK_ROOT}/sim/verilator_utils.h
CPP_UTILS := ${WORK_ROOT}/sim/libs/file_utils.hpp
VERILATOR_INCLUDES := -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd
#RTL_DIR := $(shell find ${RTL_ROOT}/ -type d -name ${MOD_NAME})
compile:
#	${VERILATOR} -Wall  ${VERILATOR_CENTRAL_WARNINGSBYPASS} ${VERILATOR_LOCAL_WARNINGSBYPASS} --trace --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.v ${VINCLUDE}
	${VERILATOR} -Wall  ${VERILATOR_CENTRAL_WARNINGSBYPASS} --trace --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.sv ${VINCLUDE}

exec:
	@echo ""
	@echo "==========================================="
	@echo "               Verilator Exec              "
	@echo "==========================================="
	@echo ""
	@echo "  Verilator version:           ${VERILATOR}"
	@echo "  Warnings bypass:             ${VERILATOR_CENTRAL_WARNINGSBYPASS}"
	@echo "  Top module:                  ${TOP_MODULE}"
	@echo "  DEP include files:           ${DEP_FILES}"
	@echo "  Packages:           ${PKG_FILES}"
	@echo "  Verilator incluudes:         ${VINCLUDE}"
	@echo "  Macros:                      ${MACROS}"
	@echo ""
	@echo "==========================================="
	@echo ""
	${VERILATOR} -Wall ${VERILATOR_CENTRAL_WARNINGSBYPASS} --public-flat-rw --exe --build --trace -o sim_top.sv testbench.cpp --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} -cc ${MOD_NAME}.sv ${VINCLUDE} ${VERILATOR_INCLUDES} --vpi --waiver-multiline ${WAIVERS} 


hier: 
	${VERILATOR} -Wall ${VERILATOR_CENTRAL_WARNINGSBYPASS}  --exe --xml-only --trace -o sim_top.sv testbench.cpp --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.sv ${VINCLUDE} --waiver-multiline ${WAIVERS} 
