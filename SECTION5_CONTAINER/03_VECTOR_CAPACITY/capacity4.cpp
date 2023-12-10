#include <vector>
#include <print>

int main()
{
	std::vector v1(5, 0);
	v1.resize(3);

	std::vector v2 = v1;
	
	std::println("{}, {}", v1.size(), v1.capacity());//3,5
	std::println("{}, {}", v2.size(), v2.capacity());//3,3

	std::println("=================================");

	std::vector v3 = std::move(v1);

	std::println("{}, {}", v1.size(), v1.capacity());//0,0
	std::println("{}, {}", v3.size(), v3.capacity());//3,5
}