#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v1{1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
	std::vector v2{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//	auto ret = std::ranges::remove(v1, 3);
	auto ret = std::ranges::remove_copy(v1, v2.begin(), 3);

	show(v1);
	show(v2);
}

