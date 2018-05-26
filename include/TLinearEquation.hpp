#ifndef T_LINEAR_EQUATION_HPP
#define T_LINEAR_EQUATION_HPP

#include <math.h>
#include <vector>

class TLinearEquation
{
public:
	static std::vector<double> GaussSeidelMethod(std::vector<double> A, std::vector<double> b, int size, double eps, int itr);
};

#endif