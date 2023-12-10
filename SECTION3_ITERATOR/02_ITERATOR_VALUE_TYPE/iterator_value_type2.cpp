#include <vector>
#include <iterator>
#include <print>

template<typename T>
auto sum(T first, T last)
{
	typename T::value_type s{};

	while( first != last )
		s += *first++;
	return s;
}

int main()
{
//	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int v[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//	auto s = sum( v.begin(), v.end() );
	auto s = sum( std::begin(v), std::end(v) );

	std::println("{}", s); 
}