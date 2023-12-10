#include <vector>
#include <ranges>
#include <print>

int main()
{
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::ranges::take_view tv{v, 5};
	std::ranges::reverse_view rv{tv};
	std::ranges::filter_view  fv{rv, 
						[](int n){ return n % 2 == 0;}};

	v[1] = 100;
	
	for (auto e : fv)	
		std::print("{}, ", e);
}
