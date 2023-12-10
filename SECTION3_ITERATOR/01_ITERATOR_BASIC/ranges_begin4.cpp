#include <string>
#include <string_view>
#include <ranges>
#include <print>

int main()
{
	std::string s{"to be or not to be"};

	std::string      ss = s;
	std::string_view sv = s;
	//-----------------------------------

//	auto it1 = std::ranges::begin( std::vector{1, 2,3} );
						// error

	auto it2 = std::ranges::begin( std::string_view{s} );
						// ok. 
}
