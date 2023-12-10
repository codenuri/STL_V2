#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v{1, 2, 3, 3, 4, 3};

	auto it1 = std::find(  v.begin(), v.end(), 4);

	auto it2 = std::remove(v.begin(), v.end(), 3);

	show(v);
	show(v.begin(), it2);
}
