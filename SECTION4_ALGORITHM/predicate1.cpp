#include <algorithm>
#include <vector>
#include <print>

int main()
{
	std::vector v{1, 2, 6, 3, 5};
	
	namespace rgs = std::ranges;

	auto ret1 = rgs::find(v, 3);	
	auto ret2 = rgs::find_if(v, 
						[](int n){ return n % 3 == 0;});	

	std::println("{}, {}", *ret1, *ret2);

}