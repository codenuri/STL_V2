#include <print>
#include <functional>
using namespace std::placeholders;

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int main()
{
	auto f1 = std::bind(&mul, std::bind(&add, _1, _2), 2);

	auto f2 = std::bind(&add, _1, _2);
	auto f3 = std::bind(&mul, f2, 2);

//	auto f3 = std::bind(&mul, &add, 2); // error

}