#include <list>
#include <iterator>
#include <print>

int main()
{
	std::list s{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto it1 = s.begin();

	// # std::advance
	std::advance(it1, 3);
	std::println("{}", *it1); // 4

	// # std::next, std::prev
	auto it2 = std::prev(it1, 3);
	auto it3 = std::next(it1, 3);
	std::println("{}, {}, {}", *it1, *it2, *it3);
								// 4, 1, 7

	// # std::distance
	auto n = std::distance(it2, it3);
	std::println("{}", n); // 6
}
