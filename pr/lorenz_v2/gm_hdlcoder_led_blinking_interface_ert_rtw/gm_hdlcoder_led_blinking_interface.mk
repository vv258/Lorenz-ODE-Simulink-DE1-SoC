###########################################################################
## Makefile generated for Simulink model 'gm_hdlcoder_led_blinking_interface'. 
## 
## Makefile     : gm_hdlcoder_led_blinking_interface.mk
## Generated on : Fri May 03 14:13:29 2019
## MATLAB Coder version: 4.0 (R2018a)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/gm_hdlcoder_led_blinking_interface.elf
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = gm_hdlcoder_led_blinking_interface
MAKEFILE                  = gm_hdlcoder_led_blinking_interface.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2018a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2018a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = D:/pr/lorenz_v2
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
MODELREF_LINK_RSPFILE_NAME = gm_hdlcoder_led_blinking_interface_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          ARM Development Studio Altera Edition (DS-5 AE)  | gmake (64-bit Windows)
# Supported Version(s):    
# ToolchainInfo Version:   R2018a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# ALTERASOCEDSINSTALLDIR
# TARGET_LOAD_CMD_ARGS
# TARGET_PKG_INSTALLDIR
# ARM_CORTEX_A_INSTALLDIR

#-----------
# MACROS
#-----------

SHELL                   = %SystemRoot%/system32/cmd.exe
ARMDS5AE_LINAROGCC      = $(ALTERASOCEDSINSTALLDIR)
CCOUTPUTFLAG            = --output_file=
LDOUTPUTFLAG            = --output_file=
EXE_FILE_EXT            = $(PROGRAM_FILE_EXT)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: ARM DS-5 Altera Edition Assembler
AS_PATH = $(ARMDS5AE_LINAROGCC)
AS = $(AS_PATH)/arm-linux-gnueabihf-as

# C Compiler: ARM DS-5 Altera Edition C Compiler
CC_PATH = $(ARMDS5AE_LINAROGCC)
CC = $(CC_PATH)/arm-linux-gnueabihf-gcc

# Linker: ARM DS-5 Altera Edition Linker
LD_PATH = $(ARMDS5AE_LINAROGCC)
LD = $(LD_PATH)/arm-linux-gnueabihf-gcc

# C++ Compiler: ARM DS-5 Altera Edition C Compiler
CPP_PATH = $(ARMDS5AE_LINAROGCC)
CPP = $(CPP_PATH)/arm-linux-gnueabihf-g++

# C++ Linker: ARM DS-5 Altera Edition C++ Linker
CPP_LD_PATH = $(ARMDS5AE_LINAROGCC)
CPP_LD = $(CPP_LD_PATH)/arm-linux-gnueabihf-gcc

# Archiver: ARM DS-5 Altera Edition Archiver
AR_PATH = $(ARMDS5AE_LINAROGCC)
AR = $(AR_PATH)/arm-linux-gnueabihf-ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = $(MEX_PATH)/mex

# Download: Download
DOWNLOAD_PATH = $(ARM_CORTEX_A_INSTALLDIR)
DOWNLOAD = $(DOWNLOAD_PATH)/ssh_download.bat

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = -ruvs
ASFLAGS              = -c \
                       -march=armv7-a -mcpu=cortex-a9 -mfpu=neon \
                       $(ASFLAGS_ADDITIONAL) \
                       $(INCLUDES)
CFLAGS               = -c \
                       -march=armv7-a -mcpu=cortex-a9 -mfpu=neon \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -O0
CPPFLAGS             = -c \
                       -march=armv7-a -mcpu=cortex-a9 -mfpu=neon \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -O2
CPP_LDFLAGS          = -lm -lrt -lpthread -ldl \
                       -march=armv7-a -mcpu=cortex-a9 -mfpu=neon
CPP_SHAREDLIB_LDFLAGS  = -shared  \
                         -lm -lrt -lpthread -ldl \
                         -march=armv7-a -mcpu=cortex-a9 -mfpu=neon
DOWNLOAD_FLAGS       = $(TARGET_LOAD_CMD_ARGS) $(SOCFPGA_USERNAME) $(SOCFPGA_PASSWORD) $(SOCFPGA_IPADDRESS) $(SOCFPGA_BUILDDIR) $(PRODUCT) Altera_CV_SOC
EXECUTE_FLAGS        =
LDFLAGS              = -lm -lrt -lpthread -ldl \
                       -march=armv7-a -mcpu=cortex-a9 -mfpu=neon
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared  \
                       -lm -lrt -lpthread -ldl \
                       -march=armv7-a -mcpu=cortex-a9 -mfpu=neon

#--------------------
# File extensions
#--------------------

OBJ_EXT             = .s.o
ASM_EXT             = .s
C_DEP               = .c.dep
H_EXT               = .h
COBJ_EXT            = .c.o
C_EXT               = .c
EXE_EXT             = .elf
SHAREDLIB_EXT       = .so
CXX_DEP             = .cpp.dep
HPP_EXT             = .hpp
CPPOBJ_EXT          = .cpp.o
CPP_EXT             = .cpp
EXE_EXT             =
SHAREDLIB_EXT       = .so
STATICLIB_EXT       = .lib
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/gm_hdlcoder_led_blinking_interface.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/alterasoc/include -I$(START_DIR)/gm_hdlcoder_led_blinking_interface_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/alterasoc/src -IC:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/arm_cortex_a/include -I$(MATLAB_ROOT)/toolbox/target/codertarget/rtos/inc

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMODEL=gm_hdlcoder_led_blinking_interface -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DON_TARGET_WAIT_FOR_START=1 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DEXT_MODE=1 -DINTEGER_CODE=0 -DMT=0 -DARM_PROJECT -DMW_EXTMODE_RECV_TIMEOUT_USEC=10 -DSTACK_SIZE=64 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DRT
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DEXT_MODE=1 -DINTEGER_CODE=0 -DMT=0
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_OPTS = -DON_TARGET_WAIT_FOR_START=1
DEFINES_SKIPFORSIL = -DARM_PROJECT -DMW_EXTMODE_RECV_TIMEOUT_USEC=10 -DSTACK_SIZE=64 -DRT
DEFINES_STANDARD = -DMODEL=gm_hdlcoder_led_blinking_interface -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_IMPLIED) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/gm_hdlcoder_led_blinking_interface_ert_rtw/gm_hdlcoder_led_blinking_interface.c $(START_DIR)/gm_hdlcoder_led_blinking_interface_ert_rtw/gm_hdlcoder_led_blinking_interface_data.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/alterasoc/src/axi4Interface.c $(MATLAB_ROOT)/toolbox/target/codertarget/rtos/src/linuxinitialize.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/arm_cortex_a/src/rtiostream_interface_armcortexa.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/arm_cortex_a/src/ext_svr_armcortexa.c C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/arm_cortex_a/src/rtiostream_tcpip_armcortexa.c

MAIN_SRC = $(START_DIR)/gm_hdlcoder_led_blinking_interface_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = gm_hdlcoder_led_blinking_interface.c.o gm_hdlcoder_led_blinking_interface_data.c.o updown.c.o ext_work.c.o rtiostream_utils.c.o axi4Interface.c.o linuxinitialize.c.o rtiostream_interface_armcortexa.c.o ext_svr_armcortexa.c.o rtiostream_tcpip_armcortexa.c.o

MAIN_OBJ = ert_main.c.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = --sysroot=C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/ALTERA~1.INS/sysroot
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = --sysroot=C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/ALTERA~1.INS/sysroot
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = --sysroot=C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/ALTERA~1.INS/sysroot

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = --sysroot=C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/ALTERA~1.INS/sysroot

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = --sysroot=C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/ALTERA~1.INS/sysroot

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = --sysroot=C:/PROGRA~3/MATLAB/SUPPOR~1/R2018a/3P778C~1.INS/ALTERA~1.INS/sysroot

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


DERIVED_SRCS = $(subst .o,.dep,$(OBJS))

build:

%.dep:



-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk
-include *.dep


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : build
	@echo "### Invoking postbuild tool "Download" ..."
	$(DOWNLOAD) $(DOWNLOAD_FLAGS)
	@echo "### Done invoking postbuild tool."


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.c.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : %.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(START_DIR)/gm_hdlcoder_led_blinking_interface_ert_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(START_DIR)/gm_hdlcoder_led_blinking_interface_ert_rtw/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(START_DIR)/gm_hdlcoder_led_blinking_interface_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.c.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/alterasoc/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.s.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/alterasoc/src/%.s
	$(AS) $(ASFLAGS) -o $@ $<


%.cpp.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/alterasoc/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


linuxinitialize.c.o : $(MATLAB_ROOT)/toolbox/target/codertarget/rtos/src/linuxinitialize.c
	$(CC) $(CFLAGS) -o $@ $<


rtiostream_interface_armcortexa.c.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/arm_cortex_a/src/rtiostream_interface_armcortexa.c
	$(CC) $(CFLAGS) -o $@ $<


ext_svr_armcortexa.c.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/arm_cortex_a/src/ext_svr_armcortexa.c
	$(CC) $(CFLAGS) -o $@ $<


rtiostream_tcpip_armcortexa.c.o : C:/ProgramData/MATLAB/SupportPackages/R2018a/toolbox/target/supportpackages/arm_cortex_a/src/rtiostream_tcpip_armcortexa.c
	$(CC) $(CFLAGS) -o $@ $<


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *.c.dep
	$(RM) *.cpp.dep
	$(ECHO) "### Deleted all derived files."


