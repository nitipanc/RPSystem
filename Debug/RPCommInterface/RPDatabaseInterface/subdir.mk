################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../RPCommInterface/RPDatabaseInterface/RPDataBaseInitialize.cpp 

OBJS += \
./RPCommInterface/RPDatabaseInterface/RPDataBaseInitialize.o 

CPP_DEPS += \
./RPCommInterface/RPDatabaseInterface/RPDataBaseInitialize.d 


# Each subdirectory must supply rules for building sources it contributes
RPCommInterface/RPDatabaseInterface/%.o: ../RPCommInterface/RPDatabaseInterface/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-linux-gnueabihf-g++ -I"D:\GitRepository\wiringPi\wiringPi" -I"D:\GitRepository\RPSystem\RPApplication" -I"D:\GitRepository\RPSystem\RPCore" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


