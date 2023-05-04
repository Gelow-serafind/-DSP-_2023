################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
app/time/time.obj: ../app/time/time.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/workspace_v7/test1/app/key" --include_path="D:/workspace_v7/test1/app/uart" --include_path="D:/workspace_v7/test1/include" --include_path="D:/workspace_v7/test1/app/time" --include_path="D:/workspace_v7/test1/app/leds" --include_path="D:/workspace_v7/test1" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.6.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="app/time/time.d_raw" --obj_directory="app/time" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


