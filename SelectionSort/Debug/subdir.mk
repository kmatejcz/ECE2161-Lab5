################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../bubblesort.cc \
../helperfunctions.cc \
../lab5.cc \
../selectionsort.cc 

CC_DEPS += \
./bubblesort.d \
./helperfunctions.d \
./lab5.d \
./selectionsort.d 

OBJS += \
./bubblesort.o \
./helperfunctions.o \
./lab5.o \
./selectionsort.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cc subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./bubblesort.d ./bubblesort.o ./helperfunctions.d ./helperfunctions.o ./lab5.d ./lab5.o ./selectionsort.d ./selectionsort.o

.PHONY: clean--2e-

