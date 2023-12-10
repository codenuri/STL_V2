#include <vector>
#include <ranges>

int main()
{
	std::vector c{1,2,3,4};
//	std::list   c{1,2,3,4};
//	int c[]{1,2,3,4};

	auto p1 = c.begin();	

	auto p2 = std::begin(c);

	auto p3 = std::ranges::begin(c);
}
