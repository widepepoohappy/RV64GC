
#########
# Paths #
#########

# source files paths
RTL_DIR := $(shell cd .. && pwd -P)
BUILD_DIR := ${RTL_DIR}/verilator/build
INCLUDES_DIR := $(shell cd ../../../../rtl/include && pwd -P)
PRIMITIVES_DIR := $(shell cd ../../../../rtl/include/primitives && pwd -P)
COMMON_CELL_DIR := $(shell cd ../../../../rtl/include/common_cells && pwd -P)
MOD_NAME := $(notdir $(RTL_DIR))
TOP_MODULE := ${MOD_NAME}
PKG_FILES := $(shell find ../pkg -type f)
HEADER_FILES := $(shell find ../svh -type f)

#############
# Verilator #
#############

# Variables
VERILATOR_INCLUDE = /usr/share/verilator/include
VERILATOR_INCLUDE_VLTSTD = /usr/share/verilator/include/vltstd/

# Include sv headers (if any)
VINCLUDE = -I${RTL_DIR} -I${HEADERS_DIR} -I${INCLUDES_DIR} -I${COMMON_CELL_DIR} -I${PRIMITIVES_DIR}

# Disable warnings
VERILATOR_WARNINGSBYPASS = 

###########
# Targets #
###########

tst:
	@echo ${TOP_MODULE}
# Build Verilator Wrapper for MPT Walker Top
lint:
	${VERILATOR} --lint-only -Wall ${VERILATOR_WARNINGSBYPASS} --top-module ${TOP_MODULE} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv ${VINCLUDE} --waiver-multiline waiving_warning 

build: lint
	mkdir -p ../verilator; \
	${VERILATOR} -Wall ${VERILATOR_WARNINGSBYPASS} --top-module ${TOP_MODULE} --trace -cc --Mdir ${BUILD_DIR} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv ${VINCLUDE}; \
	cd ${BUILD_DIR}; make -f V${TOP_MODULE}.mk
# Remove files
clean:
	rm -rf ${BUILD_DIR}
	rm -rf ${RTL_DIR}/verilator

# phony
.PHONY: clean
