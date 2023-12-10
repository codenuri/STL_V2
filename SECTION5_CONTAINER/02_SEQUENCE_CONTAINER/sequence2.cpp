#include <vector>
#include <list>
#include <deque>
#include <print>

int main()
{
//	std::list   c{1,2,3,4,5};
	std::deque  c{1,2,3,4,5};
//	std::vector c{1,2,3,4,5};

	c.push_back(10);
	c.push_back(20);
	c.push_back(30);

	auto first = c.begin();
	auto last = c.end();

	while( first != last )
		std::print("{}, ", *first++);
}