################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/drivers/Buttons.c \
../src/drivers/DISPLAY_WH1602B_4Bit.c \
../src/drivers/LEDs.c \
../src/drivers/USART.c \
../src/drivers/clock_config.c \
../src/drivers/glesk_ex_humid.c \
../src/drivers/peripheral_pinout.c 

OBJS += \
./src/drivers/Buttons.o \
./src/drivers/DISPLAY_WH1602B_4Bit.o \
./src/drivers/LEDs.o \
./src/drivers/USART.o \
./src/drivers/clock_config.o \
./src/drivers/glesk_ex_humid.o \
./src/drivers/peripheral_pinout.o 

C_DEPS += \
./src/drivers/Buttons.d \
./src/drivers/DISPLAY_WH1602B_4Bit.d \
./src/drivers/LEDs.d \
./src/drivers/USART.d \
./src/drivers/clock_config.d \
./src/drivers/glesk_ex_humid.d \
./src/drivers/peripheral_pinout.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/Buttons.o: ../src/drivers/Buttons.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/drivers/Buttons.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
src/drivers/DISPLAY_WH1602B_4Bit.o: ../src/drivers/DISPLAY_WH1602B_4Bit.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/drivers/DISPLAY_WH1602B_4Bit.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
src/drivers/LEDs.o: ../src/drivers/LEDs.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/drivers/LEDs.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
src/drivers/USART.o: ../src/drivers/USART.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/drivers/USART.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
src/drivers/clock_config.o: ../src/drivers/clock_config.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/drivers/clock_config.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
src/drivers/glesk_ex_humid.o: ../src/drivers/glesk_ex_humid.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/drivers/glesk_ex_humid.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
src/drivers/peripheral_pinout.o: ../src/drivers/peripheral_pinout.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32F4XX -DSTM32F40XX -DUSE_STDPERIPH_DRIVER -c -I../src -I../Libraries/CMSIS/Include -I../Libraries/Device/STM32F4xx/Include -I../Libraries/STM32F4xx_StdPeriph_Driver/inc -I"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Humidity/Libraries/glesk/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/drivers/peripheral_pinout.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

