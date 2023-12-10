#include <array>
#include <string>
#include "cmc.h"

int main()
{
	std::array<std::string, 3> a1{"AA","BB","CC"};
	std::array<std::string, 3> a2{"AA","BB","CC"};

	std::array<std::string, 3> a3 = a1;
	std::array<std::string, 3> a4 = std::move(a2);

	std::print("{} : ", a1.size()); show(a1);
	std::print("{} : ", a2.size()); show(a2); // 3
	std::print("{} : ", a3.size()); show(a3);
	std::print("{} : ", a4.size()); show(a4);
}