################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../RPCommInterface/RPDatabaseInterface/RPDataBaseInitialize.cpp \
../RPCommInterface/RPDatabaseInterface/account.cpp \
../RPCommInterface/RPDatabaseInterface/bind.cpp \
../RPCommInterface/RPDatabaseInterface/concurrency.cpp \
../RPCommInterface/RPDatabaseInterface/connection.cpp \
../RPCommInterface/RPDatabaseInterface/date_time.cpp \
../RPCommInterface/RPDatabaseInterface/exceptions.cpp \
../RPCommInterface/RPDatabaseInterface/last_error.cpp \
../RPCommInterface/RPDatabaseInterface/result_set.cpp \
../RPCommInterface/RPDatabaseInterface/save_point.cpp \
../RPCommInterface/RPDatabaseInterface/statement.cpp \
../RPCommInterface/RPDatabaseInterface/time.cpp \
../RPCommInterface/RPDatabaseInterface/time_span.cpp \
../RPCommInterface/RPDatabaseInterface/transaction.cpp \
../RPCommInterface/RPDatabaseInterface/worker.cpp 

OBJS += \
./RPCommInterface/RPDatabaseInterface/RPDataBaseInitialize.o \
./RPCommInterface/RPDatabaseInterface/account.o \
./RPCommInterface/RPDatabaseInterface/bind.o \
./RPCommInterface/RPDatabaseInterface/concurrency.o \
./RPCommInterface/RPDatabaseInterface/connection.o \
./RPCommInterface/RPDatabaseInterface/date_time.o \
./RPCommInterface/RPDatabaseInterface/exceptions.o \
./RPCommInterface/RPDatabaseInterface/last_error.o \
./RPCommInterface/RPDatabaseInterface/result_set.o \
./RPCommInterface/RPDatabaseInterface/save_point.o \
./RPCommInterface/RPDatabaseInterface/statement.o \
./RPCommInterface/RPDatabaseInterface/time.o \
./RPCommInterface/RPDatabaseInterface/time_span.o \
./RPCommInterface/RPDatabaseInterface/transaction.o \
./RPCommInterface/RPDatabaseInterface/worker.o 

CPP_DEPS += \
./RPCommInterface/RPDatabaseInterface/RPDataBaseInitialize.d \
./RPCommInterface/RPDatabaseInterface/account.d \
./RPCommInterface/RPDatabaseInterface/bind.d \
./RPCommInterface/RPDatabaseInterface/concurrency.d \
./RPCommInterface/RPDatabaseInterface/connection.d \
./RPCommInterface/RPDatabaseInterface/date_time.d \
./RPCommInterface/RPDatabaseInterface/exceptions.d \
./RPCommInterface/RPDatabaseInterface/last_error.d \
./RPCommInterface/RPDatabaseInterface/result_set.d \
./RPCommInterface/RPDatabaseInterface/save_point.d \
./RPCommInterface/RPDatabaseInterface/statement.d \
./RPCommInterface/RPDatabaseInterface/time.d \
./RPCommInterface/RPDatabaseInterface/time_span.d \
./RPCommInterface/RPDatabaseInterface/transaction.d \
./RPCommInterface/RPDatabaseInterface/worker.d 


# Each subdirectory must supply rules for building sources it contributes
RPCommInterface/RPDatabaseInterface/%.o: ../RPCommInterface/RPDatabaseInterface/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-linux-gnueabihf-g++ -I"D:\GitRepository\wiringPi\wiringPi" -I"D:\GitRepository\RPSystem\RPApplication" -I"D:\GitRepository\RPSystem\RPCore" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


