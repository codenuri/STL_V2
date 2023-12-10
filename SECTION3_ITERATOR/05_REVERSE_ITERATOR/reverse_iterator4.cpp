#include <vector>
#include <algorithm>
#include <iterator>
#include "cmc.h"

int main()
{	
	std::vector v1{1, 2, 3, 4, 5};
	std::vector v2{0, 0, 0, 0, 0};

	auto first = v1.rbegin(); // v1.begin();
	auto last  = v1.rend();   // v1.end(); 

	while( first != last )
		std::print("{}, ", *first++);

	std::println("");

//	std::ranges::copy(v1.begin(), v1.end(), v2.begin());
//	std::ranges::copy(v1.rbegin(), v1.rend(), v2.begin());
	std::ranges::copy(v1.begin(), v1.end(), v2.rbegin());
	show(v2);
}