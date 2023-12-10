#include <algorithm>
#include <string>

int main()
{
	int n1 = 10;
	int n2 = 20;

	std::string s1 = "AA";
	std::string s2 = "BB";

	auto ret1 = std::max(n1, n2); // ok
	auto ret2 = std::max(s1, s2); // ok
	auto ret3 = max(n1, n2); // error
	auto ret4 = max(s1, s2); // ok
}