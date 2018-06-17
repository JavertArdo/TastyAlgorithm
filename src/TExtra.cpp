#include "TExtra.hpp"

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
