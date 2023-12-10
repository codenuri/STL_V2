#include <print>
#include <functional>

void foo(int a, int b, int c, int d)
{
	std::println("{}, {}, {}, {}", a, b, c,d);
}

int main()
{
//	auto f = std::bind(&foo, 9, std::placeholders::_2, 
//							 8, std::placeholders::_1);

	using namespace std::placeholders;

	auto f = std::bind(&foo, 9, _2, 8, _1);

	f(5, 7); // foo(9, 7, 8, 5)
}