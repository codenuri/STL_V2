#include <algorithm>

int main()
{
	auto ret1 = std::max(1, 2);
	auto ret2 = std::ranges::max(1, 2);
	auto ret3 = std::ranges::max.operator()(1,2);
}
