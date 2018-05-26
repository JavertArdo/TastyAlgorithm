#include "TPolynomial.hpp"

double TPolynomial::Horner(double x, double* tab, int n)
{
	double sum = *tab;

	for (int i=1; i<=n; i++) {
		sum = sum*x + (*(tab+i));
	}

	return sum;
}
