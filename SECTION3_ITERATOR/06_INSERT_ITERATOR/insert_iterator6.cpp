#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
#include "cmc.h"

int main()
{
	using namespace std::ranges;

	std::vector v { 1, 2, 3, 4, 5 };
	std::list	s1{ 0, 0, 0, 0, 0 };
	std::list	s2{ 0, 0, 0, 0, 0 };

	copy(v, std::front_inserter(s1));
	copy(v, std::inserter(s2, s2.begin()));

	show(s1); // 5, 4, 3, 2, 1, 0, 0, 0, 0, 0
	show(s2); // 1, 2, 3, 4, 5, 0, 0, 0, 0, 0
}
