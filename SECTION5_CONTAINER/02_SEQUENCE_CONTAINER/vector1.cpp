#include <vector>
#include "cmc.h"

int main()
{
//	std::vector      v1; // error
	std::vector<int> v2; // ok

	std::vector v3{5, 2};
	std::vector v4(5, 2);
	show(v3);	// 5, 2
	show(v4);   // 2, 2, 2, 2, 2

	std::vector v5{5};
//	std::vector v6(5); // error
	std::vector<int> v6(5); // ok 	
	show(v5);	// 5
	show(v6);	// 0, 0, 0, 0, 0

	std::vector v7(v3);
	std::vector v8(v4.begin(), std::next(v4.begin(), 3));
	show(v7);	// 5, 2
	show(v8);	// 2, 2, 2 
}