#include "Link.hpp"

#include "TPolynomial.hpp"

#include <cassert>

void Test_TPolynomial_Horner();

void Run_TPolynomial_Tests()
{
	Test_TPolynomial_Horner();
}

void Test_TPolynomial_Horner()
{
	double t[] = {2, 3, 4};
	assert(TPolynomial::Horner(2, t, 2) == 18);
}
