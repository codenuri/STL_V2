#include <vector>
#include <ranges>
#include <print>

template<typename R>
void check(R& r)
{
	bool b1 = std::ranges::range<R>;
	bool b2 = std::ranges::borrowed_range<R>;

	std::println("{}, {}", b1, b2);
}
int main()
{
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::ranges::take_view tv{v, 5};
	std::ranges::reverse_view rv{v};

	check(v);	// true, false
	check(tv);  // true, true
	check(rv);  // true, true
}
