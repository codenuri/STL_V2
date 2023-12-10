#include <vector>
#include <print>
#include <iterator>

template<typename T> 
void check(const T& it)
{
	std::println("{}", std::input_or_output_iterator<T> );
}

int main()
{
	int x[4]{1,2,3,4};
	std::vector v{1,2,3,4};

	int* p1 = x;
	auto p2 = v.begin();

	check(p1);
	check(p2);

	int n = 0;
	check(n);
}
