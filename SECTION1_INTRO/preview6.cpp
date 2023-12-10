#include <vector>
#include <ranges>
#include <print>

int main()
{
	std::vector v{1,2,3,4,5,6,7,8,9,10};

//	for( auto e : v)
//	for( auto e : std::views::reverse(v) )
//	for( auto e : std::views::take(v, 5) )
//	for( auto e : std::views::filter(v, 
//				[](int n) {return n % 2 == 0;} ) )

	for( auto e : std::views::take(
						std::views::reverse(v), 5) )
	{
		std::print("{}, ", e);
	}
}

