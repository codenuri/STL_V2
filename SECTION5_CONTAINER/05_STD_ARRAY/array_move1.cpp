#include <vector>
#include <print>

int main()
{
	std::vector v1{1,2,3};
	std::vector v2{1,2,3};

	std::vector v3 = v1;
	std::vector v4 = std::move(v2);

	std::println("{}", v1.size()); // 3
	std::println("{}", v2.size()); // 0
}