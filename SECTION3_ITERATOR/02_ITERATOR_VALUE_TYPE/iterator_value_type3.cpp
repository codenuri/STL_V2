#include <vector>
#include <iterator>
#include <print>

template<typename T>
auto sum(T first, T last)
{	
	// T : vector_iterator, int*
//	typename T::value_type s{};
//	typename std::iterator_traits<T>::value_type s{};

	std::iter_value_t<T> s{};

	while( first != last )
		s += *first++;
	
	return s;
}
int main()
{
	int x[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto s1 = sum( v.begin(),     v.end() );
	auto s2 = sum( std::begin(x), std::end(x) );
	std::println("{}, {}", s1, s2); 
}