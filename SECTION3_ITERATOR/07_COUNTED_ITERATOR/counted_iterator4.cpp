#include <print>
#include <vector>
#include <algorithm>

int main()
{
	std::vector v{ 1,2,3,4,5,6,7,8,9,10 };

	std::counted_iterator ci{v.begin(), 5};

	using T = std::common_iterator<
		std::counted_iterator<std::vector<int>::iterator>, 
		std::default_sentinel_t>;

	auto ret = std::find( T{ci}, T{std::default_sentinel}, 3);

	std::println("{}", *ret);
}

