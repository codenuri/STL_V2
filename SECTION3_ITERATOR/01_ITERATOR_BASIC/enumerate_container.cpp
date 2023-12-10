#include <vector>
#include "cmc.h"

int main()
{
	std::vector v{1,2,3,4,5};

	// #1
	for( const auto& e : v )
		std::print("{}, ", e);
	
	std::println("");
	
	// #2
	auto first = v.begin();
	auto last  = v.end();

	while( first != last )
		std::print("{}, ", *first++);
	
	std::println("");

	// #3
	show(v);
	show(v.begin(), v.end());
}