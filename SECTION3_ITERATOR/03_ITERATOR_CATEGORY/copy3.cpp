#include <vector>
#include <list>
#include <algorithm>
#include <print>

int main()
{
	std::vector c1{1, 3, 5, 7, 9};
	std::vector c2{2, 4, 6, 8, 10};

	auto ret1 = std::copy(c1.begin(), 
			              std::next(c1.begin(), 3), 
						  c2.begin());

	std::println("{}", *ret1); // 8

	auto ret2 = std::ranges::copy(c1.begin(), 
							std::next(c1.begin(), 3), 
							c2.begin());

	std::println("{}, {}", *(ret2.in), *(ret2.out));
								// 7		8
}


