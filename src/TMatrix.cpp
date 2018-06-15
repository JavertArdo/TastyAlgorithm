#include "TMatrix.hpp"

std::vector<double> TMatrix::Add(std::vector<double>* A, std::vector<double>* B)
{
	std::vector<double> sum;

	for (unsigned int i=0; i<A->size(); i++)
	{
		sum.push_back(A->at(i)+B->at(i));
	}

	return sum;
}
