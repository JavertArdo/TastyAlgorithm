#ifndef T_DETERMINE_MAX_POINT_HPP
#define T_DETERMINE_MAX_POINT_HPP

class TDetermineMaxPoint
{
public:
	static double DichotomyMethod(double (*f)(double), double a, double b, double eps, int itr);
};

#endif