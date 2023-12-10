#include <print>
#include <functional>
using namespace std::placeholders;

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int main()
{
	auto f1 = std::bind(&mul, _1, 2);

	std::println("{}", f1(10) ); // mul(10, 2) => 20

	auto f2 = std::bind(&mul, std::bind(&add, _1, _2), 2);

	std::println("{}", f2(3, 4) ); 
					// mul(add(3,4), 2)
					// (3+4)*2 => 14
}
