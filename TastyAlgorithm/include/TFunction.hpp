#ifndef T_FUNCTION_HPP
#define T_FUNCTION_HPP

class TFunction
{
public:
	static double Function(double (*f)(double x), double x);
	static double Derivative(double (*f)(double x), double x);
	static double Integral(double (*f)(double x), double x1, double x2, unsigned int itr);
	static double Sinus(double x, unsigned int itr=5);
	static double Cosinus(double x, unsigned int itr=5);
};

#endif
