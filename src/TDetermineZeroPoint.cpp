#include "TDetermineZeroPoint.hpp"

#include <math.h>

double TDetermineZeroPoint::BisectionMethod(double (*f)(double), double x1, double x2, double eps, int itr)
{
	if (!(f(x1)*f(x2) < 0)) {
		return 0;
	}

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

double TDetermineZeroPoint::SecantMethod(double (*f)(double), double x1, double x2, double eps, int itr)
{
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

double TDetermineZeroPoint::NewtonRaphsonMethod(double (*f)(double), double (*df)(double), double x1, double eps, int itr)
{
	double x0;

	while ((std::fabs(f(x1)) > eps) && (itr > 0))
	{
		x0 = x1-(f(x1))/(df(x1));
		x1 = x0;
		itr--;
	}

	return x0;
}

double TDetermineZeroPoint::FalsiMethod(double (*f)(double), double x1, double x2, double eps, int itr)
{
	double x0;

	if (!(f(x1)*f(x2) < 0)) {
		return 0;
	}

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
