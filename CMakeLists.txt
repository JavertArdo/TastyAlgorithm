cmake_minimum_required (VERSION 3.11)

set (CMAKE_CXX_COMPILER g++)
set (CMAKE_C_COMPILER gcc)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_FLAGS "-Wall -pedantic -Wextra")

project (TastyAlgorithm)

enable_language (CXX)

set (SOURCE_FILES
	src/main.cpp
	src/TConstantValue.cpp
	src/TDetermineZeroPoint.cpp
	src/TDetermineExtremePoint.cpp
	src/TLinearEquation.cpp
	src/TPolynomial.cpp
	src/TExtra.cpp
	src/TFunction.cpp
)

add_executable (TastyAlgorithm ${SOURCE_FILES})

target_include_directories (TastyAlgorithm PUBLIC include)
