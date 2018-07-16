#include "Link.hpp"

#include "TFunction.hpp"

#include <cassert>

void Test_TFunction_Function();
void Test_TFunction_Derivative();
void Test_TFunction_Integral();

void Run_TFunction_Tests()
{
	Test_TFunction_Function();
	Test_TFunction_Derivative();
	Test_TFunction_Integral();
}

void Test_TFunction_Function()
{
	assert(TFunction::Function([](double x){ return x*x-612; }, 10) == -512);
}

void Test_TFunction_Derivative()
{
	double x = TFunction::Derivative([](double x){ return x*x-612; }, 10);
	assert(x > 20 && x < 20.1);
}

void Test_TFunction_Integral()
{
	double x = TFunction::Integral([](double x){ return x*x+5; }, 0, 2, 10);
	assert(x > 12.6 && x < 12.7);
}
