#include <vector>
#include <list>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector c1{1, 2, 3, 4, 5};
	std::vector c2{0, 0, 0, 0, 0, 0, 0, 0};

	std::copy(c1.begin(), c1.end(), c2.begin());

	std::ranges::copy(c1.begin(), c1.end(), c2.begin());
	std::ranges::copy(c1, c2.begin());
}

