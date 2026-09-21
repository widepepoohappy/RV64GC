
RISCV_PREFIX   ?= riscv64-unknown-elf
MARCH          ?= rv64gc
RV 	       ?= rv64
MABI           ?= lp64d
CFLAGS         ?= -O2 -g -march=$(MARCH) -mabi=$(MABI)
LDFLAGS        ?=
CC             := $(RISCV_PREFIX)-gcc
OBJDUMP        := $(RISCV_PREFIX)-objdump
OBJCOPY        := $(RISCV_PREFIX)-objcopy
READELF        := $(RISCV_PREFIX)-readelf

programm_name := hello
cpp_file := $(programm_name).cpp
elf_file := $(programm_name).elf
bin_file := $(programm_name).bin


all: $(elf_file) 

$(elf_file): $(cpp_file) 
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(elf_file) $<

asm: $(elf_file)
	$(OBJDUMP) -D $(elf_file)

info: $(elf_file)
	$(READELF) -hSW $(elf_file) | less

run: $(elf_file)
	spike pk $(elf_file)

bin: $(elf_file)
	$(OBJCOPY) -O binary $(elf_file) $(bin_file)
	
clean:
	rm -f $(elf_file) hello.S $(bin_file)

