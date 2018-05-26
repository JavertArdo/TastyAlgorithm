#ifndef T_DETERMINE_EXTREME_POINT_HPP
#define T_DETERMINE_EXTREME_POINT_HPP

class TDetermineExtremePoint
{
public:
	static double DichotomyMethod();
	static double GoldenSectionMethod(double (*f)(double), double x1, double x2, double x3, double eps, int itr);
};

#endif