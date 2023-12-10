#include <list>
#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	int x[5]     {1, 2, 3, 1, 2};
	std::list   s{1, 2, 3, 1, 2};
	std::vector v{1, 2, 3, 1, 2};

	// #1. replace 를 멤버 함수로 제공
//	s.replace(1, 0);
//	v.replace(1, 0);

	// #2. replace 를 일반 함수로 제공
	std::replace(s.begin(), s.end(), 1, 0);
	std::replace(v.begin(), v.end(), 1, 0);
	std::replace(std::begin(x), std::end(x), 1, 0);

	show(s);
	show(v);
	show(x);
}

