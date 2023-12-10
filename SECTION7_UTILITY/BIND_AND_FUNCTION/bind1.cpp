#include <print>
#include <functional>
using namespace std::placeholders;

void foo(int a, int b, int c, int d)
{
	std::println("{}, {}, {}, {}", a, b, c,d);
}

int main()
{
	foo(1, 2, 3, 4);

	auto f1 = std::bind(&foo, 1, 2, 3, 4);

	f1();	// foo(1, 2, 3, 4)

	auto f2 = std::bind(&foo, 9, _1, 8, _2);
	f2(5, 7);// foo(9, 5, 8, 7)	
}