#include <set>
#include <algorithm>
#include <print>

int main()
{
	std::set s{ 50, 30, 70, 40, 60, 20, 80};

	auto ret1 = std::ranges::find(s, 70); // bad

	auto ret2 = s.find(70); // good

	std::println("{}", *ret1); // 70
	std::println("{}", *ret2); // 70
}