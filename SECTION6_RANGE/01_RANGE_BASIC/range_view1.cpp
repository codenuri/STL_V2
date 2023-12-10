#include <vector>
#include <ranges>
#include <print>

int main()
{
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::ranges::take_view tv{v, 5};

//	std::ranges::reverse_view rv{v};
	std::ranges::reverse_view rv{tv};

//	for (auto e : v)	
//	for (auto e : tv)	
	for (auto e : rv)	
		std::print("{}, ", e);
}
