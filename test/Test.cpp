#include "Link.hpp"

int main()
{
	Run_TConstantValue_Tests();
	Run_TDetermineMinPoint_Tests();
	Run_TDetermineMaxPoint_Tests();
	Run_TDetermineZeroPoint_Tests();
	Run_TExtra_Tests();
	Run_TFunction_Tests();
	Run_TMatrix_Tests();
	Run_TPolynomial_Tests();
	Run_TSort_Tests();

	return 0;
}
