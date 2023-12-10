#include <vector>
#include <string>
#include <algorithm>
#include "cmc.h"

int main()
{
	using namespace std::literals;

	std::vector v{"AA"s, "KKK"s, "DDDD"s, "C"s};

	// C++98 style
	std::sort(v.begin(), v.end());

	// C++20 style
	std::ranges::sort(v); 
	show(v);

	std::ranges::sort(v, {}, &std::string::size);
	show(v);
}