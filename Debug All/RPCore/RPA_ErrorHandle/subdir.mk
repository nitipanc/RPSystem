################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../RPCore/RPA_ErrorHandle/RPA_ErrorDisplay.cpp 

OBJS += \
./RPCore/RPA_ErrorHandle/RPA_ErrorDisplay.o 

CPP_DEPS += \
./RPCore/RPA_ErrorHandle/RPA_ErrorDisplay.d 


# Each subdirectory must supply rules for building sources it contributes
RPCore/RPA_ErrorHandle/%.o: ../RPCore/RPA_ErrorHandle/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-linux-gnueabihf-g++ -I"D:\GitRepository\wiringPi\wiringPi" -I"D:\GitRepository\RPSystem\RPApplication" -I"D:\GitRepository\RPSystem\RPCore" -O3 -g3 -Wall -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


