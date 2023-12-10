#include <print>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
	using vi_t = std::vector<int>::iterator;
	using ci_t = std::counted_iterator<vi_t>;

	bool b1 = std::sentinel_for<std::default_sentinel_t,
								ci_t>; // true

	bool b2 = std::sentinel_for<std::default_sentinel_t,
								vi_t>;	// false

	std::println("{}, {}", b1, b2);

	bool b3 = std::sentinel_for<vi_t, vi_t>; // true

	std::println("{}", b3);
}

