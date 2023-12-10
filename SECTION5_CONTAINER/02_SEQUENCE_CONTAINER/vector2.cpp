#include <vector>
#include "cmc.h"

int main()
{
	std::vector v1{0, 0, 0};
	std::vector v2{1, 2, 3};

	// 요소 삽입
//	v1.push_front(0); 	// error
	v1.push_back(4);	
	v1.insert(v1.begin(), 9);	
	v1.insert(v1.end(), v2.begin(), v2.end());
	v1.insert_range(v1.end(), v2); // C++23
	v1.append_range(v2);		   // C++23

	show(v1);  // 9, 0, 0, 0, 4, 1, 2, 3, 1, 2, 3, 1, 2, 3


	// 요소 제거
//	v1.pop_front();
	v1.pop_back();
	v1.erase( v1.begin());
	v1.erase( v1.begin(), std::next(v1.begin(), 3));
	
	show(v1);  // 4, 1, 2, 3, 1, 2, 3, 1, 2

	v1.clear();
	show(v1);
}
