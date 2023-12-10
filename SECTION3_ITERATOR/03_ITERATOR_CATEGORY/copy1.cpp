#include <vector>
#include <list>
#include "cmc.h"

int main()
{
	std::vector c1{1, 2, 3, 4, 5};
	std::vector c2{0, 0, 0, 0, 0, 0, 0, 0};

//	c2 = c1;
//	c2.assign(c1.begin(), c1.end());

//	auto sz = c1.size();
//	for( int i = 0; i < sz; i++)
//		c2[i] = c1[i];

	std::copy(c1.begin(), c1.end(), c2.begin());

	show(c1);
	show(c2);
}
