################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../displayImage/displayImage.cpp 

OBJS += \
./displayImage/displayImage.o 

CPP_DEPS += \
./displayImage/displayImage.d 


# Each subdirectory must supply rules for building sources it contributes
displayImage/%.o: ../displayImage/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/usr/local/include/opencv4 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


