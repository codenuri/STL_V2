#include <print>
#include <vector>
#include <algorithm>

int main()
{
	namespace rgs = std::ranges;

	std::vector v{ 1,2,3,4,5,6,7,8,9,10 };

	auto it = v.begin();

	std::counted_iterator ci{it, 5};

	auto ret1 = rgs::find(ci, std::default_sentinel, 3);											
	auto ret2 = rgs::find(it, std::default_sentinel, 3);
	auto ret3 = rgs::find(it, v.end(), 3); 
}

