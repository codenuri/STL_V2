#include <set>
#include <algorithm>
#include <print>

struct MyCompare
{
	 bool operator()(int a, int b) const 
	 {
		return (a / 10) < ( b / 10 );
	 }
};
int main()
{
	std::set<int, MyCompare> s;
	s.insert(21);
	s.insert(15);
	s.insert(32);

	auto ret = s.insert(17);
	std::println("{}", ret.second); // false
	
	// 알고리즘 find
	auto ret1 = std::ranges::find(s, 12);
	std::println("{}", ret1 == s.end() ); // true


	auto ret2 = s.find(12);
	std::println("{}, {}", ret2 == s.end(), *ret2 );
						// false, 15
}