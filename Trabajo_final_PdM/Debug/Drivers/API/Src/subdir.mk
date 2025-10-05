################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/API/Src/API_ADC.c \
../Drivers/API/Src/API_Display.c \
../Drivers/API/Src/API_Servo.c \
../Drivers/API/Src/API_Servo_port.c \
../Drivers/API/Src/API_UART.c \
../Drivers/API/Src/API_debounce.c \
../Drivers/API/Src/API_debounce_port.c \
../Drivers/API/Src/API_delay.c \
../Drivers/API/Src/API_delay_port.c \
../Drivers/API/Src/fonts.c \
../Drivers/API/Src/ssd1306.c 

OBJS += \
./Drivers/API/Src/API_ADC.o \
./Drivers/API/Src/API_Display.o \
./Drivers/API/Src/API_Servo.o \
./Drivers/API/Src/API_Servo_port.o \
./Drivers/API/Src/API_UART.o \
./Drivers/API/Src/API_debounce.o \
./Drivers/API/Src/API_debounce_port.o \
./Drivers/API/Src/API_delay.o \
./Drivers/API/Src/API_delay_port.o \
./Drivers/API/Src/fonts.o \
./Drivers/API/Src/ssd1306.o 

C_DEPS += \
./Drivers/API/Src/API_ADC.d \
./Drivers/API/Src/API_Display.d \
./Drivers/API/Src/API_Servo.d \
./Drivers/API/Src/API_Servo_port.d \
./Drivers/API/Src/API_UART.d \
./Drivers/API/Src/API_debounce.d \
./Drivers/API/Src/API_debounce_port.d \
./Drivers/API/Src/API_delay.d \
./Drivers/API/Src/API_delay_port.d \
./Drivers/API/Src/fonts.d \
./Drivers/API/Src/ssd1306.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/API/Src/%.o Drivers/API/Src/%.su Drivers/API/Src/%.cyclo: ../Drivers/API/Src/%.c Drivers/API/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/home/tomas1908/STM32CubeIDE/workspace_1.19.0/pdm/Trabajo_final_PdM/Drivers/API/Inc" -I"/home/tomas1908/STM32CubeIDE/workspace_1.19.0/pdm/Trabajo_final_PdM/Drivers/API/Src" -I"/home/tomas1908/STM32CubeIDE/workspace_1.19.0/pdm/Trabajo_final_PdM/Core/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-API-2f-Src

clean-Drivers-2f-API-2f-Src:
	-$(RM) ./Drivers/API/Src/API_ADC.cyclo ./Drivers/API/Src/API_ADC.d ./Drivers/API/Src/API_ADC.o ./Drivers/API/Src/API_ADC.su ./Drivers/API/Src/API_Display.cyclo ./Drivers/API/Src/API_Display.d ./Drivers/API/Src/API_Display.o ./Drivers/API/Src/API_Display.su ./Drivers/API/Src/API_Servo.cyclo ./Drivers/API/Src/API_Servo.d ./Drivers/API/Src/API_Servo.o ./Drivers/API/Src/API_Servo.su ./Drivers/API/Src/API_Servo_port.cyclo ./Drivers/API/Src/API_Servo_port.d ./Drivers/API/Src/API_Servo_port.o ./Drivers/API/Src/API_Servo_port.su ./Drivers/API/Src/API_UART.cyclo ./Drivers/API/Src/API_UART.d ./Drivers/API/Src/API_UART.o ./Drivers/API/Src/API_UART.su ./Drivers/API/Src/API_debounce.cyclo ./Drivers/API/Src/API_debounce.d ./Drivers/API/Src/API_debounce.o ./Drivers/API/Src/API_debounce.su ./Drivers/API/Src/API_debounce_port.cyclo ./Drivers/API/Src/API_debounce_port.d ./Drivers/API/Src/API_debounce_port.o ./Drivers/API/Src/API_debounce_port.su ./Drivers/API/Src/API_delay.cyclo ./Drivers/API/Src/API_delay.d ./Drivers/API/Src/API_delay.o ./Drivers/API/Src/API_delay.su ./Drivers/API/Src/API_delay_port.cyclo ./Drivers/API/Src/API_delay_port.d ./Drivers/API/Src/API_delay_port.o ./Drivers/API/Src/API_delay_port.su ./Drivers/API/Src/fonts.cyclo ./Drivers/API/Src/fonts.d ./Drivers/API/Src/fonts.o ./Drivers/API/Src/fonts.su ./Drivers/API/Src/ssd1306.cyclo ./Drivers/API/Src/ssd1306.d ./Drivers/API/Src/ssd1306.o ./Drivers/API/Src/ssd1306.su

.PHONY: clean-Drivers-2f-API-2f-Src

