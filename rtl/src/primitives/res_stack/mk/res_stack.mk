
#########
# Paths #
#########

include ${RTL_ROOT}/src/shared.mk

# source files paths
RTL_DIR   := $(shell cd .. && pwd -P)
MOD_NAME  := $(notdir $(RTL_DIR))
PKG_FILES := $(shell find ${WORK_ROOT} -type f -name "*.pkg")
LOCAL_PRIMITIVES := $(shell find ${WORK_ROOT} -type d -name "primitives")

SVH_DIR    = ${RTL_DIR}/svh
BUILD_DIR  = ${RTL_DIR}/verilator/build
TOP_MODULE = ${MOD_NAME}
#############
# Verilator #
#############

# Include sv headers (if any)
VINCLUDE = -I${RTL_DIR} -I${SVH_DIR} -I${LOCAL_PRIMITIVES} ${DEP_SVH}
PKGS = -I${OOO_PKGS}
DEP_FILES = ${DEP_PKG} ${DEP_RTL}

###########
# Targets #
###########

tst:
	@echo ${TOP_MODULE}
# Build Verilator Wrapper for MPT Walker Top
lint:
	${VERILATOR} --lint-only -Wall ${VERILATOR_WARNINGSBYPASS} --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv ${VINCLUDE}

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
