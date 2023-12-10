#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
#include "cmc.h"

int main()
{
	using namespace std::ranges;

	std::vector v{ 1, 2, 3, 4, 5 };
	std::list   s1{ 0, 0, 0, 0, 0 };
	std::list   s2{ 0, 0, 0, 0, 0 };

	// 방법 1. push_back 사용
	for (auto e : v)
		s1.push_back(e);


	// 방법 2. copy 알고리즘 과 후방 삽입 반복자
//	std::back_insert_iterator bi{ s2 };	
//	copy(v, bi);
	
	copy(v, std::back_inserter(s2));

	show(s1);
	show(s2);
}
