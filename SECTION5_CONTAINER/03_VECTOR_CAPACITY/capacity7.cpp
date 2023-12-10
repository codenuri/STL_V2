#include <vector>
#include <deque>
#include <list>
#include <string>
#include <print>

int main()
{	
	std::list   s{ 1,2,3 };
	std::deque  d{ 1,2,3 };
	std::vector v{ 1,2,3 };
	std::string str{ "hello" };

//	std::println("{}", s.capacity()); // error
//	std::println("{}", d.capacity()); // error
	std::println("{}", v.capacity());
	std::println("{}", str.capacity());

//	s.shrink_to_fit();	// error
	d.shrink_to_fit();
	v.shrink_to_fit();
	str.shrink_to_fit();	
}