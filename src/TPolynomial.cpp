#include "TPolynomial.hpp"

double TPolynomial::Horner(double x, double* tab, unsigned int n)
{
	double sum = *tab;

	for (unsigned int i=1; i<=n; i++) {
		sum = sum*x + (*(tab+i));
	}

	return sum;
}
