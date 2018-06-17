#include "TDetermineZeroPoint.hpp"

#include <math.h>
#include <cassert>

double TDetermineZeroPoint::BisectionMethod(double (*f)(double x), double x1, double x2, double eps, unsigned int itr)
{
	// Check conditions
	assert(x1 < x2);
	assert(eps > 0 && eps < 1);
	assert(f(x1)*f(x2) < 0);

	while ((std::fabs(x1-x2) > eps) && (itr > 0))
	{
		double x0 = (x1+x2)/2.0;

		if (f(x0) == 0) {
			break;
		} else if (f(x0)*f(x1) < 0) {
			x2 = x0;
		} else {
			x1 = x0;
		}

		itr--;
	}

	return (x1+x2)/2.0;
}

double TDetermineZeroPoint::SecantMethod(double (*f)(double x), double x1, double x2, double eps, unsigned int itr)
{
	// Check conditions
	assert(x1 < x2);
	assert(eps > 0 && eps < 1);

	double x0;

	while ((std::fabs(x1-x2) > eps) && (itr > 0))
	{
		x0 = x1-f(x1)*((x1-x2)/(f(x1)-f(x2)));
		x1 = x2;
		x2 = x0;
		itr--;
	}

	return x0;
}

double TDetermineZeroPoint::NewtonRaphsonMethod(double (*f)(double x), double (*df)(double), double x1, double eps, unsigned int itr)
{
	// Check conditions
	assert(eps > 0 && eps < 1);

	double x0;

	while ((std::fabs(f(x1)) > eps) && (itr > 0))
	{
		x0 = x1-(f(x1))/(df(x1));
		x1 = x0;
		itr--;
	}

	return x0;
}

double TDetermineZeroPoint::FalsiMethod(double (*f)(double x), double x1, double x2, double eps, unsigned int itr)
{
	// Check conditions
	assert(x1 < x2);
	assert(eps > 0 && eps < 1);
	assert(f(x1)*f(x2) < 0);

	double x0;

	while ((std::fabs(x1-x2) > eps) && (itr > 0))
	{
		x0 = (x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));

		if (f(x2)*f(x0) < 0) {
			x1 = x0;
		} else {
			x2 = x0;
		}

		itr--;
	}

	return x0;
}
