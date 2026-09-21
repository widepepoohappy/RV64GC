
#########
# Paths #
#########

THIS_MK_DIR := $(realpath $(dir $(lastword $(MAKEFILE_LIST))))
include ${RTL_ROOT}/src/shared.mk

# source files paths
RTL_DIR   := $(shell cd ${THIS_MK_DIR}/.. && pwd -P)
MOD_NAME  := $(notdir $(RTL_DIR))

#SVH_DIR	= ${RTL_DIR}/svh
BUILD_DIR  = ${RTL_DIR}/verilator/build
TOP_MODULE = ${MOD_NAME}
#############
# Verilator #
#############

# Include sv headers (if any)
DEP_FILES = ${DEP_SVH} ${DEP_PKG} #${DEP_RTL}
VINCLUDE = -I${RTL_DIR} -I${LOCAL_PRIMITIVES} -I${LOCAL_MODULES_OOOEX} -I${LOCAL_MODULES_RENAME} -I${LOCAL_MODULES_DECODE} -I${COMMON_CELLS_DIR}  

PKG_FILES = -I${OOO_PKGS} ../../dcd_packages.sv
VERILATOR_LOCAL_WARNINGSBYPASS = --waiver-multiline waiver_build_prf_waivers waiver_build_dep_files
MACROS = ${COMMON_CELLS_SVH}/registers.svh

###########
# Targets #
###########

tst:
	@echo ${TOP_MODULE}
# Build Verilator Wrapper for MPT Walker Top

lint:
	@echo ""
	@echo "==========================================="
	@echo "               Verilator Lint              "
	@echo "==========================================="
	@echo ""
	@echo "  Verilator version:           ${VERILATOR}"
	@echo "  W a che t e lo dearnings bypass:             ${VERILATOR_CENTRAL_WARNINGSBYPASS}"
	@echo "  Top module:                  ${TOP_MODULE}"
	@echo "  DEP include files:           ${DEP_FILES}"
	@echo "  Packages:           ${PKG_FILES}"
	@echo "  Verilator incluudes:         ${VINCLUDE}"
	@echo "  Macros:                      ${MACROS}"
	@echo ""
	@echo "==========================================="
	@echo ""

	${VERILATOR} --lint-only -Wall \
	    ${VERILATOR_CENTRAL_WARNINGSBYPASS} \
	    --top-module ${TOP_MODULE} \
	    ${LOCAL_MODULES_OOOEX}/OoO_packages.pkg \
	    ${RTL_DIR}/${TOP_MODULE}.sv \
	    ${VINCLUDE} \
	    ${DEP_FILES} \
	    ${MACROS} \
	    ${VERILATOR_LOCAL_WARNINGSBYPASS}



build: lint
	mkdir -p ../verilator; \
	${VERILATOR} -Wall ${VERILATOR_WARNINGSBYPASS} --top-module ${TOP_MODULE} --trace -cc --Mdir ${BUILD_DIR} ${DEP_FILES} ${DEP_RTL} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv ${VINCLUDE}; \
	cd ${BUILD_DIR}; make -f V${TOP_MODULE}.mk
# Remove files
clean:
	rm -rf ${BUILD_DIR}
	rm -rf ${RTL_DIR}/verilator

# phony
.PHONY: clean
