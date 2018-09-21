#include "TDetermineMaxPoint.hpp"

#include <cmath>
#include <cassert>

double TDetermineMaxPoint::DichotomyMethod(double (*f)(double x), double a, double b, double eps, unsigned int itr)
{
	// Check conditions
	assert(a < b);
	assert(eps > 0 && eps < 1);

	double x1, x2;

	while ((std::fabs(b-a) > eps) && (itr > 0))
	{
		x1 = (a+b-eps)/2;
		x2 = (a+b+eps)/2;

		if (f(x1) <= f(x2)) {
			a = x1;
		} else {
			b = x2;
		}

		itr--;
	}

	return (x1+x2)/2;
}

double TDetermineMaxPoint::GoldenSectionMethod(double (*f)(double x), double a, double b, double eps, unsigned int itr)
{
	// Check conditions
	assert(a < b);
	assert(eps > 0);

	double k = (std::sqrt(5)-1)/2;
	double x1, x2;

	while ((std::fabs(b-a) > eps) && (itr > 0))
	{
		x1 = b-k*(b-a);
		x2 = a+k*(b-a);

		if (f(x1) <= f(x2)) {
			a = x1;
		} else {
			b = x2;
		}

		itr--;
	}

	return (x1+x2)/2;
}
