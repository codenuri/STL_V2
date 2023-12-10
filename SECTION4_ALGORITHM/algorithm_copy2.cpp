#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v1{1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
	std::vector v2{1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
	std::vector v3{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


	auto ret1 = std::remove(v1.begin(), v1.end(), 3);
	show(v1.begin(), ret1);
	

	auto ret2 = std::remove_copy(v2.begin(), v2.end(), 
								 v3.begin(), 3);	
	show(v3.begin(), ret2);
}

