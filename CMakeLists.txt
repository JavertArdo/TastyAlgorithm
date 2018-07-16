cmake_minimum_required (VERSION 3.11)

set (CMAKE_CXX_COMPILER g++)
set (CMAKE_C_COMPILER gcc)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_FLAGS "-Wall -pedantic -Wextra")

project (TastyAlgorithm)

enable_language (CXX)

set (SOURCE_FILES
	src/TConstantValue.cpp
	src/TDetermineMaxPoint.cpp
	src/TDetermineMinPoint.cpp
	src/TDetermineZeroPoint.cpp
	src/TLinearEquation.cpp
	src/TPolynomial.cpp
	src/TExtra.cpp
	src/TFunction.cpp
	src/TSort.cpp
	src/TMatrix.cpp
)

set (SOURCE_TEST_FILES
	test/TestTConstantValue.cpp
	test/TestTDetermineMinPoint.cpp
	test/TestTDetermineMaxPoint.cpp
	test/TestTDetermineZeroPoint.cpp
	test/TestTExtra.cpp
	test/TestTFunction.cpp
	test/TestTMatrix.cpp
	test/TestTPolynomial.cpp
	test/TestTSort.cpp
)

add_executable (TastyAlgorithm
	${SOURCE_FILES}
	${SOURCE_TEST_FILES}
	test/Test.cpp
)

target_include_directories (TastyAlgorithm PUBLIC include)
