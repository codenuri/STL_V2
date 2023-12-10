#include <print>
#include <vector>
#include "Buffer.h"

int main()
{
	std::vector<Buffer> v;

//	Buffer b{"mybuffer", 4096};
//	v.push_back(b);							// #1
//	v.push_back(std::move(b));				// #2

//	v.push_back( Buffer{"mybuffer", 4096} );// #3
//	v.push_back( {"mybuffer", 4096} );      // #3

	v.emplace_back("mybuffer", 4096);		// #4

	std::println("===================");
	
}