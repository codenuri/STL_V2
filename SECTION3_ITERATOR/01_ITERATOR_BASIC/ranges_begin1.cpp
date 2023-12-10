#include <vector>
#include <ranges>

int main()
{
	std::vector v{1,2,3,4};

	auto it1 = std::begin(v);
	auto it2 = std::ranges::begin(v);
}
