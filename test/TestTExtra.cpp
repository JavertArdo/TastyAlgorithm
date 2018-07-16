#include "Link.hpp"

#include "TExtra.hpp"

#include <cassert>

void Test_TExtra_Factorial();
void Test_TExtra_Fibonacci();

void Run_TExtra_Tests()
{
	Test_TExtra_Factorial();
	Test_TExtra_Fibonacci();
}

void Test_TExtra_Factorial()
{
	assert(TExtra::Factorial(5) == 120);
}

void Test_TExtra_Fibonacci()
{
	assert(TExtra::Fibonacci(8) == 21);
}
