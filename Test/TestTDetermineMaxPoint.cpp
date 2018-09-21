#include "Link.hpp"

#include "TDetermineMaxPoint.hpp"

#include <cassert>

void Test_TDetermineMaxPoint_DichotomyMethod();
void Test_TDetermineMaxPoint_GoldenSectionMethod();

void Run_TDetermineMaxPoint_Tests()
{
	Test_TDetermineMaxPoint_DichotomyMethod();
	Test_TDetermineMaxPoint_GoldenSectionMethod();
}

void Test_TDetermineMaxPoint_DichotomyMethod()
{
	double x = TDetermineMaxPoint::DichotomyMethod([](double x){ return -x*x+1.5*x; }, 0.1, 1.0, 0.00001, 100);
	assert(x > 0.749 && x < 0.751);
}

void Test_TDetermineMaxPoint_GoldenSectionMethod()
{
	double x = TDetermineMaxPoint::GoldenSectionMethod([](double x){ return -x*x+1.5*x; }, 0.1, 1.0, 0.00001, 100);
	assert(x > 0.749 && x < 0.751);
}
