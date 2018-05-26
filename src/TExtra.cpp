#include "TExtra.hpp"

int TExtra::Factorial(int n)
{
	int sum = 1;

	for (int i=1; i<=n; i++)
	{
		sum *= i;
	}

	return sum;
}
