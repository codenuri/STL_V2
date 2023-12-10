#include <vector>
#include <print>

int main()
{
	std::vector<int> v1(10);

	std::vector<int> v2;
	v2.reserve(10);

	v1.push_back(0);
	v2.push_back(0);
	
	std::println("{},{}", v1.size(), v1.capacity());
						// 11		   15(20) 
	std::println("{},{}", v2.size(), v2.capacity()); 
						// 1			10
}

