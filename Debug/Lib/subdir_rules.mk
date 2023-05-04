################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Lib/DSP2833x_ADC_cal.obj: ../Lib/DSP2833x_ADC_cal.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_ADC_cal.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_CodeStartBranch.obj: ../Lib/DSP2833x_CodeStartBranch.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_CodeStartBranch.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_CpuTimers.obj: ../Lib/DSP2833x_CpuTimers.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_CpuTimers.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_DefaultIsr.obj: ../Lib/DSP2833x_DefaultIsr.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_DefaultIsr.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_DisInt.obj: ../Lib/DSP2833x_DisInt.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_DisInt.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_GlobalVariableDefs.obj: ../Lib/DSP2833x_GlobalVariableDefs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_GlobalVariableDefs.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_Gpio.obj: ../Lib/DSP2833x_Gpio.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_Gpio.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_PieCtrl.obj: ../Lib/DSP2833x_PieCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_PieCtrl.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_PieVect.obj: ../Lib/DSP2833x_PieVect.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_PieVect.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_Sci.obj: ../Lib/DSP2833x_Sci.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_Sci.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_SysCtrl.obj: ../Lib/DSP2833x_SysCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_SysCtrl.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Lib/DSP2833x_usDelay.obj: ../Lib/DSP2833x_usDelay.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Lib/DSP2833x_usDelay.d_raw" --obj_directory="Lib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


