#include <vector>
#include <list>
#include <print>

template<typename T> 
void print_first_element( const T& v )
{
	// T : std::list<int>
	// T::value_type : std::list<int>::value_type

	typename T::value_type n = v.front();

	std::println("{}", n);
}

int main()
{
	std::list<int> c{1, 2, 3, 4, 5};

	print_first_element(c);
}

