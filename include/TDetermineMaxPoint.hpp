#ifndef T_DETERMINE_MAX_POINT_HPP
#define T_DETERMINE_MAX_POINT_HPP

class TDetermineMaxPoint
{
public:
	static double DichotomyMethod(double (*f)(double x), double a, double b, double eps, unsigned int itr);
	static double GoldenSectionMethod(double (*f)(double x), double a, double b, double eps, unsigned int itr);
};

#endif
