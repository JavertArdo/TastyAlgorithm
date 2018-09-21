cmake_minimum_required (VERSION 3.11)

project (TastyAlgorithmTest)

set (SOURCE_FILES
	Test.cpp
	TestTConstantValue.cpp
	TestTDetermineMaxPoint.cpp
	TestTDetermineMinPoint.cpp
	TestTDetermineZeroPoint.cpp
	TestTExtra.cpp
	TestTFunction.cpp
	TestTPolynomial.cpp
	TestTSort.cpp
)

add_executable (${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries (${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/
	lib::TastyAlgorithm
)
