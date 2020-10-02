################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/glesk/src/glesk_ex_eeprom.c \
../Libraries/glesk/src/glesk_ex_flash.c \
../Libraries/glesk/src/glesk_ex_temp.c \
../Libraries/glesk/src/glesk_i2c.c \
../Libraries/glesk/src/glesk_spi.c \
../Libraries/glesk/src/glesk_syscalls.c \
../Libraries/glesk/src/glesk_uart.c 

OBJS += \
./Libraries/glesk/src/glesk_ex_eeprom.o \
./Libraries/glesk/src/glesk_ex_flash.o \
./Libraries/glesk/src/glesk_ex_temp.o \
./Libraries/glesk/src/glesk_i2c.o \
./Libraries/glesk/src/glesk_spi.o \
./Libraries/glesk/src/glesk_syscalls.o \
./Libraries/glesk/src/glesk_uart.o 

C_DEPS += \
./Libraries/glesk/src/glesk_ex_eeprom.d \
./Libraries/glesk/src/glesk_ex_flash.d \
./Libraries/glesk/src/glesk_ex_temp.d \
./Libraries/glesk/src/glesk_i2c.d \
./Libraries/glesk/src/glesk_spi.d \
./Libraries/glesk/src/glesk_syscalls.d \
./Libraries/glesk/src/glesk_uart.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/glesk/src/glesk_ex_eeprom.o: ../Libraries/glesk/src/glesk_ex_eeprom.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Libraries/glesk/src/glesk_ex_eeprom.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Libraries/glesk/src/glesk_ex_flash.o: ../Libraries/glesk/src/glesk_ex_flash.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Libraries/glesk/src/glesk_ex_flash.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Libraries/glesk/src/glesk_ex_temp.o: ../Libraries/glesk/src/glesk_ex_temp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Libraries/glesk/src/glesk_ex_temp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Libraries/glesk/src/glesk_i2c.o: ../Libraries/glesk/src/glesk_i2c.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Libraries/glesk/src/glesk_i2c.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Libraries/glesk/src/glesk_spi.o: ../Libraries/glesk/src/glesk_spi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Libraries/glesk/src/glesk_spi.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Libraries/glesk/src/glesk_syscalls.o: ../Libraries/glesk/src/glesk_syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Libraries/glesk/src/glesk_syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Libraries/glesk/src/glesk_uart.o: ../Libraries/glesk/src/glesk_uart.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Libraries/glesk/src/glesk_uart.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

