#include <print>
#include <concepts>

template<typename T>
void is_predicate(T f)
{
	std::println("{}", std::predicate<T, int> );
}

int main()
{
	is_predicate( [](int n){ return n % 3 == 0;} ); // T	
	
	is_predicate([](int a, int b){ return a < b;}); // F
	
	is_predicate([](double a){ return a;});	// T

	is_predicate([](int n){ std::println("{}", n);});//F 
}