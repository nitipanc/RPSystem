################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../RPApplication/RPA_TempSensor/XC_TempSensor.cpp 

OBJS += \
./RPApplication/RPA_TempSensor/XC_TempSensor.o 

CPP_DEPS += \
./RPApplication/RPA_TempSensor/XC_TempSensor.d 


# Each subdirectory must supply rules for building sources it contributes
RPApplication/RPA_TempSensor/%.o: ../RPApplication/RPA_TempSensor/%.cpp RPApplication/RPA_TempSensor/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"D:\GitRepository\wiringPi\wiringPi" -I"D:\GitRepository\RPSystem\RPCore\RPA_ErrorHandle" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


