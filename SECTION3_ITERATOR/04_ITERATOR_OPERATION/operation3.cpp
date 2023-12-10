#include <list>
#include <iterator>
#include <print>

int main()
{
	std::list s{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto first = s.begin();

	// # std::next
	auto it1 = std::next(first);	// N=1
	auto it2 = std::next(first, 3);

	// # std::ranges::next
	auto it3 = std::ranges::next(first);
	auto it4 = std::ranges::next(first, 3);
	auto it5 = std::ranges::next(first, s.end());
						// it5 = s.end()
	auto it6 = std::ranges::next(first, 3,  s.end());
	auto it7 = std::ranges::next(first, 20, s.end());
			
	std::println("{}", it6 == it4 ); // true
	std::println("{}", it5 == it7 ); // true
}
