#include "TMatrix.hpp"

std::vector<double> TMatrix::Add(std::vector<double>* A, std::vector<double>* B)
{
	std::vector<double> add;

	for (unsigned int i=0; i<A->size(); i++)
	{
		add.push_back(A->at(i)+B->at(i));
	}

	return add;
}

std::vector<double> TMatrix::Sub(std::vector<double>* A, std::vector<double>* B)
{
	std::vector<double> sub;

	for (unsigned int i=0; i<A->size(); i++)
	{
		sub.push_back(A->at(i)-B->at(i));
	}

	return sub;
}
