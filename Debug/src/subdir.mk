################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/fact.cpp \
../src/helloWorld.cpp \
../src/hypothenuse.cpp \
../src/initials.cpp \
../src/main.cpp 

CPP_DEPS += \
./src/fact.d \
./src/helloWorld.d \
./src/hypothenuse.d \
./src/initials.d \
./src/main.d 

OBJS += \
./src/fact.o \
./src/helloWorld.o \
./src/hypothenuse.o \
./src/initials.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/fact.d ./src/fact.o ./src/helloWorld.d ./src/helloWorld.o ./src/hypothenuse.d ./src/hypothenuse.o ./src/initials.d ./src/initials.o ./src/main.d ./src/main.o

.PHONY: clean-src

