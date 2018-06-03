#ifndef T_DETERMINE_MIN_POINT_HPP
#define T_DETERMINE_MIN_POINT_HPP

class TDetermineMinPoint
{
public:
	static double DichotomyMethod(double (*f)(double), double a, double b, double eps, int itr);
};

#endif