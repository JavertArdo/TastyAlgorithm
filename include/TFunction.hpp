#ifndef T_FUNCTION_HPP
#define T_FUNCTION_HPP

class TFunction
{
public:
	static double Function(double (*f)(double), double x);
	static double Derivative(double (*f)(double), double x);
	static double Integral(double (*f)(double), double x1, double x2, int itr);
};

#endif