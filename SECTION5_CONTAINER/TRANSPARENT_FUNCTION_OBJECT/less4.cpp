#include <vector>
#include <functional>
#include <algorithm>

int main()
{
	std::vector v{1,3,5,7,9,2,4,6,8,10};

	std::sort(v.begin(), v.end(), std::less<int>{});
	std::sort(v.begin(), v.end(), std::less{});	// std::less<void>{}
//	std::sort(v.begin(), v.end(), {});			// error

	std::ranges::sort(v.begin(), v.end(), std::less<int>{});
	std::ranges::sort(v.begin(), v.end(), std::less{});
	std::ranges::sort(v.begin(), v.end(), {}); 	// ok 
}
