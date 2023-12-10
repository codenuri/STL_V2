#include <functional>
#include <print>

void foo(int a) {}

int main()
{
	std::function<void(int)>     f1{ &foo };
	std::function<int(int, int)> f2{ std::plus<int>{} };
	std::function<void(int)>     f3{ [](int a) {} };

	std::println("{}", f1.target_type().name());
	std::println("{}", f2.target_type().name());
	std::println("{}", f3.target_type().name());

	auto ptr1 = f1.target<void(*)(int)>();
	auto ptr2 = f1.target<int*>();
	
	std::println("{}", *ptr1 == foo );	
	std::println("{}", ptr2 == nullptr );
}