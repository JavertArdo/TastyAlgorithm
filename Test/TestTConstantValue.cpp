#include "Link.hpp"

#include "TConstantValue.hpp"

#include <cassert>

void Test_TConstantValue_e();
void Test_TConstantValue_PI();

void Run_TConstantValue_Tests()
{
	Test_TConstantValue_e();
	Test_TConstantValue_PI();
}

void Test_TConstantValue_e()
{
	double e = TConstantValue::e(10);
	assert(e > 2.71 && e < 2.72);
}

void Test_TConstantValue_PI()
{
	double PI = TConstantValue::PI();
	assert(PI > 3.14 && PI < 3.15);
}
