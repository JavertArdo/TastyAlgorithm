#include "Link.hpp"

#include "TFunction.hpp"

#include <cassert>

void Test_TFunction_Function();
void Test_TFunction_Derivative();
void Test_TFunction_Integral();
void Test_TFunction_Sinus();
void Test_TFunction_Cosinus();

void Run_TFunction_Tests()
{
	Test_TFunction_Function();
	Test_TFunction_Derivative();
	Test_TFunction_Integral();
	Test_TFunction_Sinus();
	Test_TFunction_Cosinus();
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

void Test_TFunction_Sinus()
{
	double sinus;
	sinus = TFunction::Sinus(0);
	assert(sinus == 0);
	sinus = TFunction::Sinus(1);
	assert(sinus > 0.84 && sinus < 0.85);
	sinus = TFunction::Sinus(2, 6);
	assert(sinus > 0.90 && sinus < 0.91);
	sinus = TFunction::Sinus(3, 6);
	assert(sinus > 0.14 && sinus < 0.15);
}

void Test_TFunction_Cosinus()
{
	double cosinus;
	cosinus = TFunction::Cosinus(0);
	assert(cosinus == 1);
	cosinus = TFunction::Cosinus(1);
	assert(cosinus > 0.54 && cosinus < 0.55);
	cosinus = TFunction::Cosinus(2, 6);
	assert(cosinus > -0.42 && cosinus < -0.41);
	cosinus = TFunction::Cosinus(3, 6);
	assert(cosinus > -1.0 && cosinus < -0.98);
}
