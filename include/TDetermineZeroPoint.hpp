#ifndef T_DETERMINE_ZERO_POINT_HPP
#define T_DETERMINE_ZERO_POINT_HPP

#include <math.h>

class TDetermineZeroPoint
{
public:
	static double BisectionMethod(double (*f)(double x), double a, double b, double eps, unsigned int itr);
	static double SecantMethod(double (*f)(double x), double x1, double x2, double eps, unsigned int itr);
	static double NewtonRaphsonMethod(double (*f)(double x), double (*df)(double), double x1, double eps, unsigned int itr);
	static double FalsiMethod(double (*f)(double x), double x1, double x2, double eps, unsigned int itr);
};

#endif
