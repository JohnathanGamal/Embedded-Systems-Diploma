################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
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
ToggleLED.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
ToggleLED.list \

OBJCOPY_BIN += \
ToggleLED.bin \


# All Target
all: ToggleLED.elf secondary-outputs

# Tool invocations
ToggleLED.elf: $(OBJS) $(USER_OBJS) C:\Users\gamal\STM32CubeIDE\workspace_1.4.0\ToggleLED\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "ToggleLED.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\gamal\STM32CubeIDE\workspace_1.4.0\ToggleLED\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="ToggleLED.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

ToggleLED.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "ToggleLED.list"
	@echo 'Finished building: $@'
	@echo ' '

ToggleLED.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "ToggleLED.bin"
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
