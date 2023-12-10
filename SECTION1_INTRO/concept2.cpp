#include <print>
#include <concepts>

bool f1(int a, int b) {return true;}
void f2(int a, int b) {}
int  f3(int a, double b) {return 3;}

template<typename T>
void foo(T& f)
{
	bool b = std::predicate<T, int, int>;

	std::println("{}", b);
}

int main()
{
	foo(f1);	// true
	foo(f2);	// false
	foo(f3);	// true
}