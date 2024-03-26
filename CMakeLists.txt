cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(PROJECT_NAME CarFactory)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME}
	src/CarFactory.cpp
	src/CarFactory.h
	src/vehicles.cpp
	src/vehicles.h
	src/vehicleFactory.cpp
	src/vehicleFactory.h
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)