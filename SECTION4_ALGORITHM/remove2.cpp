#include <vector>
#include <string>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector<std::string> v{"A", "B", "C", "A", "B"};

	auto ret = std::remove(v.begin(), v.end(), "C");

	std::println("{}", v.size()); // 5

	show(v);	
}
