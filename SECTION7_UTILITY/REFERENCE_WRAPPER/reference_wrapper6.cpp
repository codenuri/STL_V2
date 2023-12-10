#include <print>
#include <functional>

int add(int a, int b) { return a + b; }

int main()
{
	std::reference_wrapper f{add};

	int n = f(1, 2); // f.operator()(1,2)

	std::println("{}", n);
}