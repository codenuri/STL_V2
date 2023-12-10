#include <print>
#include <functional>

void foo(int& r) { r = 100; }

template<typename F, typename T>
void log_and_call(F f, T arg)
{
	// logging 
	f(arg);
}

int main()
{
	int n = 0;

//	log_and_call(foo, n); // foo(n)
//	log_and_call(foo, &n);	

//	std::reference_wrapper r(n);
//	log_and_call(foo, r);	
	log_and_call(foo, std::ref(n) );

	std::println("{}", n);
}