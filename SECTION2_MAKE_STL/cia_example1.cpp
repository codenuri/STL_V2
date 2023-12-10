#include <vector>
#include <list>
#include <algorithm>
#include "cmc.h"

int main()
{
//	std::vector c{1,2,3,1,2,3,1,2,3,1};
	std::list   c{1,2,3,1,2,3,1,2,3,1};
	
	int n = std::count(c.begin(), c.end(), 1);

	std::println("{}", n);
}