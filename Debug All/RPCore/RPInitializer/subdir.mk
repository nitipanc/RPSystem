################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../RPCore/RPInitializer/RPInitializer.cpp 

OBJS += \
./RPCore/RPInitializer/RPInitializer.o 

CPP_DEPS += \
./RPCore/RPInitializer/RPInitializer.d 


# Each subdirectory must supply rules for building sources it contributes
RPCore/RPInitializer/%.o: ../RPCore/RPInitializer/%.cpp RPCore/RPInitializer/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-linux-gnueabihf-g++ -I"D:\GitRepository\wiringPi\wiringPi" -I"D:\GitRepository\RPSystem\RPApplication" -I"D:\GitRepository\RPSystem\RPCore" -O3 -g3 -Wall -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


