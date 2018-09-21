#ifndef T_SORT_HPP
#define T_SORT_HPP

#include <utility>

class TSort
{
public:
	template<typename T>
	static void BubbleSort(T* tab, unsigned int n, bool (*f)(double a, double b))
	{
		for (unsigned int i=1; i<n; i++)
		{
			for (unsigned int j=1; j<n; j++)
			{
				if (!f(tab[j-1], tab[j]))
				{
					std::swap(tab[j-1], tab[j]);
				}
			}
		}
	}
};

#endif
