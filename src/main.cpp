#include <iostream>

#include <array>
#include <vector>

#include "TConstantValue.hpp"
#include "TDetermineMaxPoint.hpp"
#include "TDetermineMinPoint.hpp"
#include "TDetermineZeroPoint.hpp"
#include "TLinearEquation.hpp"
#include "TPolynomial.hpp"
#include "TExtra.hpp"
#include "TFunction.hpp"

int main()
{
	// Constant Value Test
	std::cout << TConstantValue::PI() << std::endl;
	std::cout << TConstantValue::e(10) << std::endl;

	// Determine Zero Point Test
	std::cout << TDetermineZeroPoint::BisectionMethod([](double x){ return x*x-612; }, 21.5, 32.1, 0.00001, 15) << std::endl;
	std::cout << TDetermineZeroPoint::SecantMethod([](double x){ return x*x-612; }, 21.5, 32.1, 0.00001, 10) << std::endl;
	std::cout << TDetermineZeroPoint::NewtonRaphsonMethod([](double x){ return x*x-612; }, [](double x){ return 2*x; }, 1.2, 0.00001, 10) << std::endl;
	std::cout << TDetermineZeroPoint::FalsiMethod([](double x){ return x*x-612; }, 21.5, 32.1, 0.00001, 10) << std::endl;

	// Determine Min Point Test
	std::cout << TDetermineMinPoint::DichotomyMethod([](double x){ return x*x-1.5*x; }, 0.1, 1.0, 0.00001, 100) << std::endl;
	std::cout << TDetermineMinPoint::GoldenSectionMethod([](double x){ return x*x-1.5*x; }, 0.1, 1.0, 0.00001, 100) << std::endl;

	// Determine Max Point Test
	std::cout << TDetermineMaxPoint::DichotomyMethod([](double x){ return -x*x+1.5*x; }, 0.1, 1.0, 0.00001, 100) << std::endl;
	std::cout << TDetermineMaxPoint::GoldenSectionMethod([](double x){ return -x*x+1.5*x; }, 0.1, 1.0, 0.00001, 100) << std::endl;

	// Extra Test
	std::cout << TExtra::Factorial(0) << std::endl;
	std::cout << TExtra::Fibonacci(8) << std::endl;

	// Polynomial Test
	double t[] = {2, 3, 4};
	std::cout << TPolynomial::Horner(2, t, 2) << std::endl;

	// Function Test
	std::cout << "Function(10, x^2-612): " << -512 << ", derivative(10, 20): " << TFunction::Derivative([](double x){ return x*x-612; }, 10) << std::endl;
	std::cout << "Integral of f(x)=x from 0 to 2: " << TFunction::Integral([](double x){ return x*x+5; }, 0, 2, 10) << std::endl;

	//----- UNTESTED -----//
	//std::vector<double> solved;
	//std::vector<double> A = {3, 3, 1, 2, 5, 7, 1, 2, 1};
	//std::vector<double> b = {12, 33, 8};
	//solved = TLinearEquation::GaussSeidelMethod(A, b, 3, 0.003, 50);
	//std::cout << solved[0] << ", " << solved[1] << ", " << solved[2] << std::endl;

	return 0;
}
