#include <string>
#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	namespace rgs = std::ranges;
	std::vector<std::string> v{"AAAA", "D", "BB", "CCC"};

	rgs::sort(v);
	show(v);

	rgs::sort(v, [](std::string& s1, std::string& s2)
					{ return s1.size() < s2.size();});
	show(v);

	rgs::sort(v, {}, &std::string::size);
	show(v);

	rgs::sort(v, std::greater{}, &std::string::size);
	show(v);
}