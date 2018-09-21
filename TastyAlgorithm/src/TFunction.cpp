#include "TFunction.hpp"

#include "TExtra.hpp"

#include <cassert>
#include <cmath>

double TFunction::Function(double (*f)(double x), double x)
{
	return f(x);
}

double TFunction::Derivative(double (*f)(double x), double x)
{
	double h = 0.00001;
	return (f(x+h)-f(x-h))/(2*h);
}

double TFunction::Integral(double (*f)(double x), double x1, double x2, unsigned int itr)
{
	// Check condition
	assert(x1 < x2);

	double step = (x2-x1)/itr;
	double area = 0;

	for (unsigned int i=0; i<itr; i++)
	{
		area += f(x1+(i+0.5)*step)*step;
	}

	return area;
}

double TFunction::Sinus(double x, unsigned int itr)
{
	double sum = 0;

	for (unsigned int i=0; i<itr; i++)
	{
		sum += (std::pow(-1, i)/TExtra::Factorial(2*i+1))*std::pow(x, 2*i+1);
	}

	return sum;
}

double TFunction::Cosinus(double x, unsigned int itr)
{
	double sum = 0;

	for (unsigned int i=0; i<itr; i++)
	{
		sum += (std::pow(-1, i)/TExtra::Factorial(2*i))*std::pow(x, 2*i);
	}

	return sum;
}
