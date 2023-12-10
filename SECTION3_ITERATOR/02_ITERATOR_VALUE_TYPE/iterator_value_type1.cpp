#include <vector>
#include <iterator>
#include <print>

template<typename T>
auto sum(T first, T last)
{
//	std::iter_value_t<T> s = 0;
	std::iter_value_t<T> s{};

	while( first != last )
		s += *first++;

	return s;
}

int main()
{
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto s = sum(v.begin(), v.end());

	std::println("{}", s); // 55
}