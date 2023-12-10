#include <print>
#include <functional>
using namespace std::placeholders;

void foo(int a, int b, int c) 
{
	std::println("{}, {}, {}", a, b, c);
}

int main()
{
	int n = 0;

	auto f1 = std::bind(&foo, n, std::ref(n), _1);

	n = 3;

	f1(9);	// 0, 3, 9
}