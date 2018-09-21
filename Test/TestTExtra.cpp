#include "Link.hpp"

#include "TExtra.hpp"

#include <cassert>

void Test_TExtra_Factorial();
void Test_TExtra_Fibonacci();
void Test_TExtra_Power();
void Test_TExtra_Exponential();

void Run_TExtra_Tests()
{
	Test_TExtra_Factorial();
	Test_TExtra_Fibonacci();
	Test_TExtra_Power();
	Test_TExtra_Exponential();
}

void Test_TExtra_Factorial()
{
	assert(TExtra::Factorial(5) == 120);
}

void Test_TExtra_Fibonacci()
{
	assert(TExtra::Fibonacci(8) == 21);
}

void Test_TExtra_Power()
{
	assert(TExtra::Power(2, 0) == 1);
	assert(TExtra::Power(2, 1) == 2);
	assert(TExtra::Power(2, 2) == 4);
	assert(TExtra::Power(2, 5) == 32);
}

void Test_TExtra_Exponential()
{
	assert(TExtra::Exponential(0) == 1);
	assert(TExtra::Exponential(2) > 7.38);
}
