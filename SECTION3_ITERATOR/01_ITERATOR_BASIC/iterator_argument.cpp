#include <list>
#include <vector>
#include <deque>
#include <print>

template<typename ITER, typename T>
ITER myfind(ITER first, ITER last, const T& value)
{
	return first;
}

int main()
{
	std::println("{}", sizeof(std::list  <int>::iterator));
	std::println("{}", sizeof(std::vector<int>::iterator));
	std::println("{}", sizeof(std::deque <int>::iterator));

	std::vector v{1,2,3,4};

	auto ret = myfind(v.begin(), v.end(), 3);
}
