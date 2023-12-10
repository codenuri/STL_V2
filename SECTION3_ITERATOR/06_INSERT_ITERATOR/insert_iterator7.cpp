#include <vector>
#include <iterator>
#include "cmc.h"

int main()
{
	std::vector v { 1, 2, 3, 4, 5 };

	// #1
	auto p1 = std::front_inserter(v);
	auto p2 = std::inserter(v, v.begin());
//	*p1 = 10; // error. v.push_front() 호출
	*p2 = 10; // ok.. v.insert()

	// #2
	++p2; // ok. no operation.

	// #3
	using T = std::back_insert_iterator<std::vector<int>>;
	std::println("{}", std::output_iterator<T, int> );
}
