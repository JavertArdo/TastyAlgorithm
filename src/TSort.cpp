#include "TSort.hpp"

#include <utility>

void TSort::BubbleSort(std::vector<double>& tab, bool (*f)(double a, double b))
{
	for (unsigned int i=1; i<tab.size(); i++)
	{
		for (unsigned int j=1; j<tab.size(); j++)
		{
			if (!f(tab[j-1], tab[j]))
			{
				std::swap(tab[j-1], tab[j]);
			}
		}
	}
}
