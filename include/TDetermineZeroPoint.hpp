#ifndef T_DETERMINE_ZERO_POINT_HPP
#define T_DETERMINE_ZERO_POINT_HPP

#include <math.h>

class TDetermineZeroPoint
{
public:
	static double BisectionMethod(double (*f)(double), double a, double b, double eps, int itr);
	static double SecantMethod(double (*f)(double), double x1, double x2, double eps, int itr);
	static double NewtonRaphsonMethod(double (*f)(double), double (*df)(double), double x1, double eps, int itr);
	static double FalsiMethod(double (*f)(double), double x1, double x2, double eps, int itr);
};

#endif
