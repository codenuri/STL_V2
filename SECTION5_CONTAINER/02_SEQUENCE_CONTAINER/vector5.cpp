#include <vector>
#include "cmc.h"

int main()
{
	std::vector v1{1, 2, 3, 4};
	std::vector v2{5, 6, 7};

	v1.swap(v2);
	show(v1); // 5, 6, 7
	show(v2); // 1, 2, 3, 4

	v1.assign(v2.begin(), v2.end());
	show(v1); // 1, 2, 3, 4
	show(v2); // 1, 2, 3, 4
}
