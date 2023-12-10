#include <vector>
#include <print>

template<typename R>
class take_view
{
	R* rg; // std::ranges::ref_view<R>
	std::size_t count;
public:
	take_view(R& r, std::size_t c) : rg{&r}, count{c} {}

	auto begin() { return rg->begin();}
	auto end()   { return std::next(rg->begin(), count);}
};

int main()
{
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	take_view tv{v, 5};

	v[0] = 100;

//	for (auto e : v)
	for (auto e : tv)
		std::print("{}, ", e);
}
