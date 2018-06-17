#include "TConstantValue.hpp"

#include "TExtra.hpp"

double TConstantValue::e(unsigned int itr)
{
	double sum = 0;

	for (unsigned int i=0; i<itr; i++)
	{
		sum += 1.0/TExtra::Factorial(i);
	}

	return sum;
}

double TConstantValue::PI(unsigned int itr)
{
	double sum = 0.0;
	double counter = 4.0;
	double denominator = 1.0;
	bool plus = true;

	for (unsigned int i=0; i<itr; i++)
	{
		if (plus) {
			sum += counter/denominator;
			denominator += 2;
			plus = false;
		} else {
			sum -= counter/denominator;
			denominator += 2;
			plus = true;
		}
	}

	return sum;
}
