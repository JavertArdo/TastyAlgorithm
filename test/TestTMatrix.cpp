#include "Link.hpp"

#include "TMatrix.hpp"

#include <cassert>
#include <iostream>

void Test_TMatrix_Add();
void Test_TMatrix_Sub();

void Run_TMatrix_Tests()
{
	Test_TMatrix_Add();
	Test_TMatrix_Sub();
}

void Test_TMatrix_Add()
{
	std::vector<double> A = { 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	std::vector<double> B = { 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	std::vector<double> C;
	C = TMatrix::Add(&A, &B);

	for (unsigned int i=0; i<C.size(); i++)
	{
		assert(C[i] == 3);
	}
}

void Test_TMatrix_Sub()
{
	std::vector<double> A = { 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	std::vector<double> B = { 2, 2, 2, 2, 2, 2, 2, 2, 2 };
	std::vector<double> C;
	C = TMatrix::Sub(&A, &B);

	for (unsigned int i=0; i<C.size(); i++)
	{
		assert(C[i] == -1);
	}
}
