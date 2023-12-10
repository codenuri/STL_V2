#include <vector>
#include <algorithm>
#include <print>

int square(int a)     { return a * a; }
int add(int a, int b) { return a + b; }
void print(int n)     { std::print("{}, ", n); }

int main()
{
	std::vector v1{1, 2, 3, 4, 5};
	std::vector<int> v2;
	std::vector<int> v3;

	std::ranges::transform(v1, std::back_inserter(v2), 
						   square);
	// v2 : 1, 4, 9, 16, 25

	std::ranges::transform(v1, v2, std::back_inserter(v3),
						   add);
	// v3 : 2, 6, 12, 20, 30

	std::ranges::for_each(v3, print);
}