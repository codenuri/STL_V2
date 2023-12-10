#include <set>
#include <functional>
#include "cmc.h"

template<typename T>
struct absLess
{
	bool operator()(const T& a, const T& b) const
	{
		return abs(a) < abs(b);	
	}	
};
int main()
{
//	std::set<int> s; // <, -7, 3, 4, 5
//	std::set<int, std::greater<int> > s;
	std::set<int, absLess<int> > s; // 3, 4, 5, -7

	s.insert(5);
	s.insert(3);
	s.insert(-7);
	s.insert(4);

	show(s);
}
