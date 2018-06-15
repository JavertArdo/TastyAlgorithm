#ifndef T_MATRIX_HPP
#define T_MATRIX_HPP

#include <vector>

class TMatrix
{
public:
	static std::vector<double> Add(std::vector<double>* A, std::vector<double>* B);
	static std::vector<double> Sub(std::vector<double>* A, std::vector<double>* B);
};

#endif