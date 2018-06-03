#include "TDetermineMinPoint.hpp"

#include <math.h>

double TDetermineMinPoint::DichotomyMethod(double (*f)(double), double a, double b, double eps, int itr)
{
	double x1, x2;

	while ((std::fabs(b-a) > eps) && (itr > 0))
	{
		x1 = (a+b-eps)/2;
		x2 = (a+b+eps)/2;

		if (f(x1) >= f(x2)) {
			a = x1;
		} else {
			b = x2;
		}

		itr--;
	}

	return (x1+x2)/2;
}

double TDetermineMinPoint::GoldenSectionMethod(double (*f)(double), double a, double b, double eps, int itr)
{
	double k = (std::sqrt(5)-1)/2;
	double x1, x2;

	while ((std::fabs(b-a) > eps) && (itr > 0))
	{
		x1 = b-k*(b-a);
		x2 = a+k*(b-a);

		if (f(x1) >= f(x2)) {
			a = x1;
		} else {
			b = x2;
		}

		itr--;
	}

	return (x1+x2)/2;
}
