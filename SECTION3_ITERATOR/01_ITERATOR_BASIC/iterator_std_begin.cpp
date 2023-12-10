#include <vector>

template<typename C> 
constexpr auto mybegin(C& c) noexcept( noexcept(c.begin()) ) -> decltype(c.begin()) 
{ 
	return c.begin();
}

template<typename T, std::size_t SZ>
constexpr T* mybegin(T(&arr)[SZ]) noexcept
{
	return arr;
}

int main()
{
	int x[]{1,2,3,4};
	std::vector c{1,2,3,4};

	auto p1 = mybegin(c);
	auto p2 = mybegin(x);
}