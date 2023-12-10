#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
#include <print>

int main()
{
//	std::vector c{1,2,3,4,5};
	std::list   c{1,2,3,4,5};

//	auto it1 = c.begin() + 1;

	auto it2 = ++c.begin();

	auto it3 = std::next(c.begin());
	auto it4 = std::ranges::next(c.begin());
}
