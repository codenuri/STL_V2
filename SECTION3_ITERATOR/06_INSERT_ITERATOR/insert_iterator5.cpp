#include <list>
#include <iterator>
#include "cmc.h"

int main()
{
	std::list s{ 1, 2, 3, 4, 5 };

	// #1. using class template
	std::front_insert_iterator fi1{s};
	std::back_insert_iterator  bi1{s};
	std::insert_iterator       ii1{s, std::next(s.begin(), 2)};

	std::front_insert_iterator<std::list<int>> fi2{s};
	std::back_insert_iterator<std::list<int>>  bi2{s};
	std::insert_iterator<std::list<int>>       ii2{s, std::next(s.begin(), 2)};

	// #2. using convenient function template
	auto fi3 = std::front_inserter(s);
	auto bi3 = std::back_inserter(s);
	auto ii3 = std::inserter(s, std::next(s.begin(), 2));

	*fi3 = 10;
	*bi3 = 20;
	*ii3 = 30;	

	show(s);	// 10, 1, 2, 30, 3, 4, 5, 20
}
