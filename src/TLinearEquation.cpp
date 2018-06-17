#include "TLinearEquation.hpp"

#include <cassert>

std::vector<double> TLinearEquation::GaussSeidelMethod(std::vector<double>* A, std::vector<double>* b, int size, double eps, unsigned int itr)
{
	// Check conditions
	assert(A != nullptr && b != nullptr);
	assert(eps > 0 && eps < 1);

	/*
	// Extra arrays
	std::vector<double> L(size*size);
	std::vector<double> D(size*size);
	std::vector<double> U(size*size);

	// Split matrix
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			if (i > j) {
				L[i*size+j] = A[i*size+j];
			} else if (i < j) {
				U[i*size+j] = A[i*size+j];
			} else {
				D[i*size+j] = A[i*size+j];
			}
		}
	}

	// Multiply D*(-1)*b
	for (int i=0; i<size; i++) {
		D[i*size+i] = 1/D[i*size+i];
		b[i] *= D[i*size+i];
	}

	// Multiply D*L & D*U
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			L[i*size+j] *= D[i*size+i];
			U[i*size+j] *= D[i*size+i];
		}
	}

	// Solve linear equation
	bool done = false;
	std::vector<double> x(size);

	while (!done && (itr > 0)) {
		for (int i=0; i<size; i++) {
			x[i] = b[i];

			for (int j=0; j<i; j++) {
				x[i] -= L[i*size+j]*x[j];
			}

			for (int j=i+1; j<size; j++) {
				x[i] -= U[i*size+j]*x[j];
			}
		}

		for (int i=0; i<size; i++) {
			if (std::fabs(x[i] - x[i-1]) < eps) {
				done = true;
			}
		}
			
		itr--;
	}

	return x;
	*/

	std::vector<double> x;
	return x;
}