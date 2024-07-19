################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/platform.c 

OBJS += \
./Drivers/BSP/platform.o 

C_DEPS += \
./Drivers/BSP/platform.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/%.o Drivers/BSP/%.su Drivers/BSP/%.cyclo: ../Drivers/BSP/%.c Drivers/BSP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Drivers/CMSIS/Include -I../GesturesMZ -I../BSP/Components -I../BSP -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/BSP/Components/VL53LMZ -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -O0 -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP

clean-Drivers-2f-BSP:
	-$(RM) ./Drivers/BSP/platform.cyclo ./Drivers/BSP/platform.d ./Drivers/BSP/platform.o ./Drivers/BSP/platform.su

.PHONY: clean-Drivers-2f-BSP

