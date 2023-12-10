#include <list>
#include <forward_list>
#include <deque>
#include <vector>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <iterator>
#include <string_view>
#include <print>

template<typename T>
void p(std::string_view name)
{
	if constexpr ( std::contiguous_iterator<T> )
		std::println("{:6} : contiguous_iterator", name);

	else if constexpr ( std::random_access_iterator<T>)
		std::println("{:6} : random_access_iterator", name);

	else if constexpr ( std::bidirectional_iterator<T>)
		std::println("{:6} : bidirectional_iterator", name);
	
	else if constexpr ( std::forward_iterator<T>)
		std::println("{:6} : forward_iterator", name);

	else if constexpr ( std::input_iterator<T>)
		std::println("{:6} : input_iterator", name);			
}

int main()
{
	p<std::vector<int>  ::iterator>("vector");
	p<std::list<int>    ::iterator>("list");
	p<std::deque<int>   ::iterator>("deque");
	p<std::array<int,5> ::iterator>("array");
	p<std::string       ::iterator>("string");
	p<std::set<int>     ::iterator>("set");
	p<std::map<int, int>::iterator>("map");
	p<std::forward_list<int>::iterator>("forward_list");
}