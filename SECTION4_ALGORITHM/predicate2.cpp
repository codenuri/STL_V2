#include <algorithm>
#include <vector>
#include <functional>
#include "cmc.h"

int main()
{
	std::vector v{1, 3, 6, 3, 5};

	namespace rgs = std::ranges;

	auto ret1 = rgs::find   (v.begin(), v.end(), 3);
	auto ret2 = rgs::find_if(v.begin(), v.end(), 
						[](int n){ return n % 2 == 0;});

	rgs::sort(v.begin(), v.end());
	rgs::sort(v.begin(), v.end(), std::greater{} );
}