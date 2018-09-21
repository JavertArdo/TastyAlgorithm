#include "TExtra.hpp"

#include "TConstantValue.hpp"

int TExtra::Factorial(unsigned int n)
{
	int sum = 1;

	for (unsigned int i=1; i<=n; i++)
	{
		sum *= i;
	}

	return sum;
}

int TExtra::Fibonacci(unsigned int n)
{
	int tab[] = {0, 1};

	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}

	int sum = 0;

	while (n > 1)
	{
		sum = tab[0]+tab[1];
		tab[0] = tab[1];
		tab[1] = sum;

		n--;
	}

	return sum;
}

double TExtra::Power(double x, unsigned int n)
{
	double sum = x;

	if (n == 0) {
		return 1;
	} else if (n == 1) {
		return x;
	}

	for (unsigned int i=2; i<=n; i++)
	{
		sum *= x;
	}

	return sum;
}

double TExtra::Exponential(unsigned int n)
{
	return TExtra::Power(TConstantValue::e(), n);
}
