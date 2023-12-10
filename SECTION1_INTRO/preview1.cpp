#include <list>
#include <vector>
#include <print>

int main()
{
	int x[5] {1, 2, 3, 4, 5};
	x[0] = 10;
	
	std::vector v{1, 2, 3, 4, 5};
	v[0] = 10;

	v.resize(10);
	v.push_back(0);

	std::println("{}", v.size());  // 11
	std::println("{}", v.empty()); // false

	std::list s{1, 2, 3, 4, 5};
}
