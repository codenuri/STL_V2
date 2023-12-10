#include <vector>
#include <list>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::list   s{1,2,3,4,5};
	std::vector v{1,2,3,4,5};

	std::ranges::reverse(v);
	s.reverse();

	show(v);
	show(s);
}