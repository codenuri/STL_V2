#include <vector>
#include <algorithm>
#include <iterator>
#include <print>

int main()
{	
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto it = std::next(v.begin(), 5);
	
	std::reverse_iterator ri{ it };

	std::println("{}, {}", *it, *ri); // 6, 5
	
	++it;
	++ri;
	
	std::println("{}, {}", *it, *ri); // 7, 4
}