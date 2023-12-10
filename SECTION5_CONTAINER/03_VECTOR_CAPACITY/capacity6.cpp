#include <vector>
#include <algorithm>
#include <print>

int main()
{
	std::vector v = {1, 2, 3, 1, 2, 3, 1, 2, 3};
	std::println("{},{}", v.size(), v.capacity()); // 9, 9

	auto ret = std::ranges::remove(v, 3);	
	std::println("{},{}", v.size(), v.capacity());	// 9, 9

	v.erase(ret.begin(), ret.end());
	std::println("{},{}", v.size(), v.capacity()); // 6, 9

	v.clear();	
	std::println("{},{}", v.size(), v.capacity()); // 0, 9

	v.shrink_to_fit();
	std::println("{},{}", v.size(), v.capacity()); // 0, 0
}