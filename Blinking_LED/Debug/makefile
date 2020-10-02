################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Blinking_LED.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Blinking_LED.list \

OBJCOPY_BIN += \
Blinking_LED.bin \


# All Target
all: Blinking_LED.elf secondary-outputs

# Tool invocations
Blinking_LED.elf: $(OBJS) $(USER_OBJS) /mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic\ starter\ kit/Embedded_Starter_Kit/Blinking_LED/STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "Blinking_LED.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/mnt/f3ff9526-d364-40dd-9b28-d5196c933058/GlobalLogic starter kit/Embedded_Starter_Kit/Blinking_LED/STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Blinking_LED.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Blinking_LED.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Blinking_LED.list"
	@echo 'Finished building: $@'
	@echo ' '

Blinking_LED.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Blinking_LED.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
