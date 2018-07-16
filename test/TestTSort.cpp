#include "Link.hpp"

#include "TSort.hpp"

#include <vector>
#include <cassert>

void Test_TSort_BubbleSort();

void Run_TSort_Tests()
{
	Test_TSort_BubbleSort();
}

void Test_TSort_BubbleSort()
{
	std::vector<double> sort = { 6, 3, 2, 4, 1};
	TSort::BubbleSort(sort, [](double a, double b){ return a < b; });
	assert(sort[0] == 1);
	assert(sort[1] == 2);
	assert(sort[2] == 3);
	assert(sort[3] == 4);
	assert(sort[4] == 6);
}
