################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/VL53LMZ/vl53lmz_api.c \
../Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_cnh.c \
../Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_detection_thresholds.c \
../Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_motion_indicator.c \
../Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_xtalk.c 

OBJS += \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_api.o \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_cnh.o \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_detection_thresholds.o \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_motion_indicator.o \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_xtalk.o 

C_DEPS += \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_api.d \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_cnh.d \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_detection_thresholds.d \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_motion_indicator.d \
./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_xtalk.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/VL53LMZ/%.o Drivers/BSP/Components/VL53LMZ/%.su Drivers/BSP/Components/VL53LMZ/%.cyclo: ../Drivers/BSP/Components/VL53LMZ/%.c Drivers/BSP/Components/VL53LMZ/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Drivers/CMSIS/Include -I../GesturesMZ -I../BSP/Components -I../BSP -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/BSP/Components/VL53LMZ -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -O0 -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-VL53LMZ

clean-Drivers-2f-BSP-2f-Components-2f-VL53LMZ:
	-$(RM) ./Drivers/BSP/Components/VL53LMZ/vl53lmz_api.cyclo ./Drivers/BSP/Components/VL53LMZ/vl53lmz_api.d ./Drivers/BSP/Components/VL53LMZ/vl53lmz_api.o ./Drivers/BSP/Components/VL53LMZ/vl53lmz_api.su ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_cnh.cyclo ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_cnh.d ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_cnh.o ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_cnh.su ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_detection_thresholds.cyclo ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_detection_thresholds.d ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_detection_thresholds.o ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_detection_thresholds.su ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_motion_indicator.cyclo ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_motion_indicator.d ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_motion_indicator.o ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_motion_indicator.su ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_xtalk.cyclo ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_xtalk.d ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_xtalk.o ./Drivers/BSP/Components/VL53LMZ/vl53lmz_plugin_xtalk.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-VL53LMZ

