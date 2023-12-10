#include <vector>
#include <ranges>
#include <print>

int main()
{
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


	std::ranges::take_view tv1{v, 5};

	auto tv2 = std::views::take(v, 5);

	auto tv3 = v | std::views::take(5);
			// operator|(v, std::views::take(5) )


	for( auto e : tv3)
		std::print("{}, ", e);

}
