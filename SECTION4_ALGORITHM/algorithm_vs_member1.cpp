#include <vector>
#include <list>
#include <algorithm>
#include "cmc.h"

int main()
{
//	std::vector c{1, 2, 3, 1, 2, 3};
	std::list   c{1, 2, 3, 1, 2, 3};
	
//	c.erase(std::remove(c.begin(),c.end(),3), c.end());

	c.remove(3);
	
	show(c);
}

