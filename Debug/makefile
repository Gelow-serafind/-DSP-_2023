################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./Lib/DSP2833x_ADC_cal.obj" \
"./Lib/DSP2833x_CodeStartBranch.obj" \
"./Lib/DSP2833x_CpuTimers.obj" \
"./Lib/DSP2833x_DefaultIsr.obj" \
"./Lib/DSP2833x_DisInt.obj" \
"./Lib/DSP2833x_GlobalVariableDefs.obj" \
"./Lib/DSP2833x_Gpio.obj" \
"./Lib/DSP2833x_PieCtrl.obj" \
"./Lib/DSP2833x_PieVect.obj" \
"./Lib/DSP2833x_Sci.obj" \
"./Lib/DSP2833x_SysCtrl.obj" \
"./Lib/DSP2833x_usDelay.obj" \
"./User/main.obj" \
"./app/key/key.obj" \
"./app/leds/leds.obj" \
"./app/time/time.obj" \
"./app/uart/uart.obj" \
"../Lib/28335_RAM_lnk.cmd" \
"../Lib/DSP2833x_Headers_nonBIOS.cmd" \
"../Lib/IQmath.lib" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include Lib/subdir_vars.mk
-include User/subdir_vars.mk
-include app/key/subdir_vars.mk
-include app/leds/subdir_vars.mk
-include app/time/subdir_vars.mk
-include app/uart/subdir_vars.mk
-include Lib/subdir_rules.mk
-include User/subdir_rules.mk
-include app/key/subdir_rules.mk
-include app/leds/subdir_rules.mk
-include app/time/subdir_rules.mk
-include app/uart/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
test1.out \

EXE_OUTPUTS__QUOTED += \
"test1.out" \

BIN_OUTPUTS += \
test1.hex \

BIN_OUTPUTS__QUOTED += \
"test1.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "test1.out"

# Tool invocations
test1.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -g --diag_warning=225 --diag_wrap=off --display_error_number -z -m"test1.map" --stack_size=0x300 --warn_sections -i"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/lib" -i"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="test1_linkInfo.xml" --rom_model -o "test1.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

test1.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/hex2000"  -o "test1.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "Lib\DSP2833x_ADC_cal.obj" "Lib\DSP2833x_CodeStartBranch.obj" "Lib\DSP2833x_CpuTimers.obj" "Lib\DSP2833x_DefaultIsr.obj" "Lib\DSP2833x_DisInt.obj" "Lib\DSP2833x_GlobalVariableDefs.obj" "Lib\DSP2833x_Gpio.obj" "Lib\DSP2833x_PieCtrl.obj" "Lib\DSP2833x_PieVect.obj" "Lib\DSP2833x_Sci.obj" "Lib\DSP2833x_SysCtrl.obj" "Lib\DSP2833x_usDelay.obj" "User\main.obj" "app\key\key.obj" "app\leds\leds.obj" "app\time\time.obj" "app\uart\uart.obj" 
	-$(RM) "Lib\DSP2833x_CpuTimers.d" "Lib\DSP2833x_DefaultIsr.d" "Lib\DSP2833x_GlobalVariableDefs.d" "Lib\DSP2833x_Gpio.d" "Lib\DSP2833x_PieCtrl.d" "Lib\DSP2833x_PieVect.d" "Lib\DSP2833x_Sci.d" "Lib\DSP2833x_SysCtrl.d" "User\main.d" "app\key\key.d" "app\leds\leds.d" "app\time\time.d" "app\uart\uart.d" 
	-$(RM) "Lib\DSP2833x_ADC_cal.d" "Lib\DSP2833x_CodeStartBranch.d" "Lib\DSP2833x_DisInt.d" "Lib\DSP2833x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

