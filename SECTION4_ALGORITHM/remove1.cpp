#include <vector>
#include <list>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v{1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
/*
	auto ret = std::remove( v.begin(), v.end(), 3 );
	show(v);

	v.erase(ret, v.end());
	show(v);
*/
	v.erase(std::remove( v.begin(), v.end(), 3 ), v.end());
	show(v);
}

