#include <array>
#include "cmc.h"

int main()
{
	std::array<int, 3> a1{1,2,3};
	std::array<int, 3> a2{1,2,3};

	std::array<int, 3> a3 = a1;
	std::array<int, 3> a4 = std::move(a2);

	show(a1);
	show(a2);
	show(a3);
	show(a4);
}