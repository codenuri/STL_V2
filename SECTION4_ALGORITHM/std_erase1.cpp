#include <list>
#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v{1, 2, 3, 1, 2, 3};
	std::list   s{1, 2, 3, 1, 2, 3};
	
//	v.erase(std::remove(v.begin(), v.end(), 3), v.end());
//	s.erase(std::remove(s.begin(), s.end(), 3), s.end());
//	s.remove(3);

	auto cnt1 = std::erase(v, 3);
	auto cnt2 = std::erase(s, 3);

	std::println("{}, {}", cnt1, cnt2);

	show(v);
	show(s);
}