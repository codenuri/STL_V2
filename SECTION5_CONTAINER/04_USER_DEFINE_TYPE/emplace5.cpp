#include <print>
#include <vector>
#include "Buffer.h"

int main()
{
	std::vector<Buffer>  v1;
	v1.push_back(Buffer{"mybuffer", 4096}); // bad
	v1.emplace_back("mybuffer", 4096);		// good


	std::vector<int> v2;	
	v2.push_back(1);	// good. more readable!!
	v2.emplace_back(1);	// so good
}
