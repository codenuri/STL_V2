#include <print>
#include <vector>
#include <algorithm>

int main()
{
	std::vector v{ 1,2,3,4,5,6,7,8,9,10 };

	std::counted_iterator ci{v.begin(), 5};

//	auto ret = std::find(ci, std::default_sentinel, 3);
	auto ret = std::ranges::find(ci, std::default_sentinel, 3);

	std::println("{}", *ret);
}

