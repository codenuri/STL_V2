#include <vector>
#include <ranges>

int main()
{
//	auto it1 = std::begin( std::vector{1,2,3} );

//	*it1 = 10;    // error. it1 은 const iterator

//	int n = *it1; // compile ok
				  // but, it1 is dangling

	auto it2 = std::ranges::begin( std::vector{1,2,3} );

}
