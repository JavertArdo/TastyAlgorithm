#include "Link.hpp"

#include "TDetermineMinPoint.hpp"

#include <cassert>

void Test_TDetermineMinPoint_DichotomyMethod();
void Test_TDetermineMinPoint_GoldenSectionMethod();

void Run_TDetermineMinPoint_Tests()
{
	Test_TDetermineMinPoint_DichotomyMethod();
	Test_TDetermineMinPoint_GoldenSectionMethod();
}

void Test_TDetermineMinPoint_DichotomyMethod()
{
	double x = TDetermineMinPoint::DichotomyMethod([](double x){ return x*x-1.5*x; }, 0.1, 1.0, 0.00001, 100);
	assert(x > 0.749 && x < 0.751);
}

void Test_TDetermineMinPoint_GoldenSectionMethod()
{
	double x = TDetermineMinPoint::GoldenSectionMethod([](double x){ return x*x-1.5*x; }, 0.1, 1.0, 0.00001, 100);
	assert(x > 0.749 && x < 0.751);
}
