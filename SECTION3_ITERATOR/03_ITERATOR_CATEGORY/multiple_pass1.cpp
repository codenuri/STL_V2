#include <iterator>
#include <vector>
#include <list>
#include <ranges>
#include <print>

template<typename T> void p()
{
	std::println("input : {0}, forward : {1}",				 
					std::input_iterator<T>, 
					std::forward_iterator<T>);
			
}

int main()
{
	p<std::vector<int>::iterator>(); // true, true
	p<std::list<int>::iterator  >(); // true, true
	p<std::istream_iterator<int>>(); // true, false
}

