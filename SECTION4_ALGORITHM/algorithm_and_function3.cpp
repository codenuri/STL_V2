#include <vector>
#include <algorithm>
#include <functional>
#include "cmc.h"

int main()
{
	namespace rgs = std::ranges;

	std::vector v{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	rgs::sort(v);
	show(v);

//	rgs::sort(v, [](int a, int b) { return a > b;} );
	rgs::sort(v, std::greater<int>{} );
	rgs::sort(v, std::greater{} ); // ~ C++17

	rgs::sort(v, {} ); // rgs::sort(v); 
					   // rgs::sort(v, std::less{} );

	show(v);
}

