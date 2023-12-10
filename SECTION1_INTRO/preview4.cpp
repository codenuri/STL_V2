#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v{1,3,5,7,9,2,4,6,8,10 };

	std::sort( v.begin(), v.end() );

	show(v);
}

