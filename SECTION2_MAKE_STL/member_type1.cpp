#include <vector>
#include <list>
#include <print>

/*
void print_first_element( const std::vector<int>& c )
{
	int n = c.front();
	std::println("{}", n);
}
*/

/*
template<typename T>
void print_first_element( const std::vector<T>& c )
{
	T n = c.front();

	std::println("{}", n);
}
*/
template<typename T>
void print_first_element( const T& c )
{
	// T : std::list<double>

	auto n = c.front();

	std::println("{}", n);
}


int main()
{
//	std::vector<int>    c{1, 2, 3, 4, 5};
//	std::vector<double> c{1, 2, 3, 4, 5};
	std::list<double>   c{1, 2, 3, 4, 5};

	print_first_element(c);
}

