#include <print>
#include <functional>

void foo(int  a) { std::println("{}", a); }

int main()
{
	int n = 0;

	auto f1 = std::bind(&foo, n);
	auto f2 = std::bind(&foo, std::ref(n) );

	n = 10;

	f1(); // foo( 0 )	
	f2(); // foo( n )
}