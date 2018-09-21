cmake_minimum_required (VERSION 3.11)

project (TastyAlgorithmLibrary VERSION 0.1.0)

add_library (${PROJECT_NAME}
	src/TConstantValue.cpp
	src/TDetermineMaxPoint.cpp
	src/TDetermineMinPoint.cpp
	src/TDetermineZeroPoint.cpp
	src/TExtra.cpp
	src/TFunction.cpp
	src/TPolynomial.cpp
	src/TSort.cpp
)

add_library (lib::TastyAlgorithm ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/include
)
