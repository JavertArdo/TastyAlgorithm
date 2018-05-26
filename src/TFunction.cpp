#include "TFunction.hpp"

double TFunction::Function(double (*f)(double), double x)
{
	return f(x);
}

double TFunction::Derivative(double (*f)(double), double x)
{
	double h = 0.00001;
	return (f(x+h)-f(x-h))/(2*h);
}

double TFunction::Integral(double (*f)(double), double x1, double x2, int itr)
{
	double step = (x2-x1)/itr;
	double area = 0;

	for (int i=0; i<itr; i++) {
		area += f(x1+(i+0.5)*step)*step;
	}

	return area;
}
