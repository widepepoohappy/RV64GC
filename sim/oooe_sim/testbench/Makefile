
MOD_NAME := ooo_extension
OOOE_MK := $(shell find ${WORK_ROOT}/rtl/src/ -type f -name "${MOD_NAME}.mk")
WAIVERS := $(shell find ${WORK_ROOT}/rtl/src/ -type f -name "waiver_build*")

include ${OOOE_MK}

VERILATOR_UTILS := ${WORK_ROOT}/sim/verilator_utils.h
CPP_UTILS := ${WORK_ROOT}/sim/libs/file_utils.hpp
VERILATOR_INCLUDES := -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd
#RTL_DIR := $(shell find ${RTL_ROOT}/ -type d -name ${MOD_NAME})
compile:
#	${VERILATOR} -Wall  ${VERILATOR_CENTRAL_WARNINGSBYPASS} ${VERILATOR_LOCAL_WARNINGSBYPASS} --trace --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.v ${VINCLUDE}
	${VERILATOR} -Wall  ${VERILATOR_CENTRAL_WARNINGSBYPASS} --trace --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.sv ${VINCLUDE}
compile_waivers:
	${VERILATOR} -Wall  ${VERILATOR_CENTRAL_WARNINGSBYPASS} --trace --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.sv ${VINCLUDE} --waiver-multiline ${WAIVERS}

run:
	g++ -DDAC=V${MOD_NAME} -DDACHEADER=\"obj_dir/V${MOD_NAME}.h\" -I./obj_dir -I${VERILATOR_INCLUDES} testbench.cpp ${VERILATOR_INCLUDES}/verilated.cpp ${VERILATOR_INCLUDES}/verilated_vcd_c.cpp obj_dir/V${MOD_NAME}__ALL.a -o testbench

run_v:
	${VERILATOR} -Wall ${VERILATOR_CENTRAL_WARNINGSBYPASS} --binary --trace -o sim_top.sv testbench.cpp --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.sv ${VINCLUDE} --waiver-multiline ${WAIVERS}
exec:
	${VERILATOR} -Wall ${VERILATOR_CENTRAL_WARNINGSBYPASS} --public-flat-rw --exe --build --trace -o sim_top.sv testbench.cpp --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.sv ${VINCLUDE} ${VERILATOR_INCLUDES} --vpi --waiver-multiline ${WAIVERS} 


hier: 
	${VERILATOR} -Wall ${VERILATOR_CENTRAL_WARNINGSBYPASS}  --exe --xml-only --trace -o sim_top.sv testbench.cpp --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv -cc ${MOD_NAME}.sv ${VINCLUDE} --waiver-multiline ${WAIVERS} 
#vpi: 
#	${VERILATOR} -Wall ${VERILATOR_CENTRAL_WARNINGSBYPASS} -cc ${MOD_NAME}.sv --exe testbench.cpp \
  		$(VERILATOR_ROOT)/include/verilated_vpi.cpp \
  		--Mdir obj_dir --top-module ${TOP_MODULE} ${DEP_FILES} ${PKG_FILES} ${RTL_DIR}/${TOP_MODULE}.sv ${VINCLUDE} ${VERILATOR_INCLUDES} --waiver-multiline ${WAIVERS} --vpi  

vpi:
	${VERILATOR} -Wall ${VERILATOR_CENTRAL_WARNINGSBYPASS} \
      --cc \
      --top-module ${TOP_MODULE} \
      ${VINCLUDE} ${VERILATOR_INCLUDES} \
      ${PKG_FILES} ${DEP_FILES} \
      ${RTL_DIR}/${TOP_MODULE}.sv \
      --Mdir obj_dir \
      --vpi \
      --exe testbench.cpp $(VERILATOR_ROOT)/include/verilated_vpi.cpp \
      --waiver-multiline ${WAIVERS}
	
