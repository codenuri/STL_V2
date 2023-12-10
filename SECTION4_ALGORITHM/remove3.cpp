#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v1{1, 3, 1, 3, 1, 3, 10, 3, 9, 3};
	
	auto ret1 = std::remove(v1.begin(), 
							std::next(v1.begin(), 7), 3);
	show(v1); // 1, 1, 1, 10, 1, 3, 10, 3, 9, 3		

//	v1.erase(ret1, v1.end());
//	show(v1); // 1, 1, 1, 10

	v1.erase(ret1, std::next(v1.begin(), 7));
	show(v1); // 1, 1, 1, 10, 3, 9, 3

	// # C++20
	std::vector v2{1, 3, 1, 3, 1, 3, 10, 3, 9, 3};
	
	auto ret2 = std::ranges::remove(v2.begin(), 
							std::next(v2.begin(), 7), 3);
	show(v2); // 1, 1, 1, 10, 1, 3, 10, 3, 9, 3		

	v2.erase(ret2.begin(), ret2.end());
	show(v2);

}

