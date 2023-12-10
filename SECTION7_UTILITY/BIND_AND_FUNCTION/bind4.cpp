#include <print>
#include <functional>

void foo(int& a) { a = 100; }

int main()
{
	int n = 0;

	auto f1 = std::bind(&foo, n);
	f1(); // foo(f1이 내부적으로 보관한 복사본)

	std::println("{}", n);

	auto f2 = std::bind(&foo, std::ref(n) );
	f2(); // foo(n)

	std::println("{}", n);

}