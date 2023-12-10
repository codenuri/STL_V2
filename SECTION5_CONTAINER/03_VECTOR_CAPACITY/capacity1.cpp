#include <vector>
#include <print>

int main()
{
	std::vector<int> v(10);

	v.resize(7);

	std::println("{},{}", v.size(), v.capacity()); // 7,10

	v.push_back(0);

	std::println("{},{}", v.size(), v.capacity()); // 8,10

	v.shrink_to_fit();

	std::println("{},{}", v.size(), v.capacity()); // 8,8

	v.push_back(0);

	std::println("{},{}", v.size(), v.capacity()); // 9,?

	v.resize(17);
	std::println("{},{}", v.size(), v.capacity()); 
							// 17, ?

}

