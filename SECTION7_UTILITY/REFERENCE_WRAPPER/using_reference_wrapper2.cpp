#include <print>
#include <functional>

void foo(int a) { a = 100; }

int main()
{	
	std::function<void()> f;

	{
		int n = 0;

		f = std::bind(foo, n);
//		f = std::bind(foo, std::ref(n) );
	}

	f(); //  foo(0)
}