#include "Link.hpp"

#include "TDetermineZeroPoint.hpp"

#include <cassert>

void Test_TDetermineZeroPoint_BisectionMethod();
void Test_TDetermineZeroPoint_SecantMethod();
void Test_TDetermineZeroPoint_NewtonRaphsonMethod();
void Test_TDetermineZeroPoint_FalsiMethod();

void Run_TDetermineZeroPoint_Tests()
{
	Test_TDetermineZeroPoint_BisectionMethod();
	Test_TDetermineZeroPoint_SecantMethod();
	Test_TDetermineZeroPoint_NewtonRaphsonMethod();
	Test_TDetermineZeroPoint_FalsiMethod();
}

void Test_TDetermineZeroPoint_BisectionMethod()
{
	double x = TDetermineZeroPoint::BisectionMethod([](double x){ return x*x-612; }, 21.5, 32.1, 0.00001, 15);
	assert(x > 24.73 && x < 24.74);
}

void Test_TDetermineZeroPoint_SecantMethod()
{
	double x = TDetermineZeroPoint::SecantMethod([](double x){ return x*x-612; }, 21.5, 32.1, 0.00001, 10);
	assert(x > 24.73 && x < 24.74);
}

void Test_TDetermineZeroPoint_NewtonRaphsonMethod()
{
	double x = TDetermineZeroPoint::NewtonRaphsonMethod([](double x){ return x*x-612; }, [](double x){ return 2*x; }, 1.2, 0.00001, 10);
	assert(x > 24.73 && x < 24.74);
}

void Test_TDetermineZeroPoint_FalsiMethod()
{
	double x = TDetermineZeroPoint::FalsiMethod([](double x){ return x*x-612; }, 21.5, 32.1, 0.00001, 10);
	assert(x > 24.73 && x < 24.74);
}
