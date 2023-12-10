#include <list>
#include <print>

int main()
{
	int x[]{1, 2, 3, 4, 5};

	int* p1 = x;
	++p1;

	std::list s{1, 2, 3, 4, 5};

	auto p2 = s.begin();
	++p2; // p2.operator++()

	std::println("{}", *p2); // 2
}