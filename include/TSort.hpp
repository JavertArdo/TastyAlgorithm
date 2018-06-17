#ifndef T_SORT_HPP
#define T_SORT_HPP

#include <vector>

class TSort
{
public:
	static void BubbleSort(std::vector<double>& tab, bool (*f)(double a, double b));
};

#endif
