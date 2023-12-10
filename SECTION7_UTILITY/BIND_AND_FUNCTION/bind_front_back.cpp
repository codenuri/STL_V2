#include <print>
#include <functional>
using namespace std::placeholders;

void foo(int a, int b, int c, int d)
{
	std::println("{}, {}, {}, {}", a, b, c,d);
}

int main()
{
	int n = 0;
	auto f1 = std::bind(&foo, 0, 0, _1, _2);
	auto f2 = std::bind_front(&foo, 0, 0);
	f1(1, 2);
	f2(1, 2);	// 0, 0, 1, 2

	auto f3 = std::bind(&foo, _1, _2, _3, 0);
	auto f4 = std::bind_back(&foo, 0);
	f3(1,2,3);
	f3(1,2,3);
}