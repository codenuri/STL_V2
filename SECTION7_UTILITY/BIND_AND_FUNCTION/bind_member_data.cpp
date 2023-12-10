#include <print>
#include <functional>

struct Point
{
	int x, y;
};

int main()
{
	Point pt{1, 2};

	auto b = std::bind(&Point::y, &pt);

	std::println("{}", b()); // pt.y   2

	b() = 10;	// pt.y = 10

	std::println("{}", pt.y); // 10
}