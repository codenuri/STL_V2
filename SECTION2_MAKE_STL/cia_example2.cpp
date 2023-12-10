#include <vector>
#include <list>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector c{1,2,3,1,2,3,1,2,3,1};

	// C++98 style	
	int n1 = std::count(c.begin(), c.end(), 1);


	// C++20. constrained algorithm
	int n2 = std::ranges::count(c, 1);
	int n3 = std::ranges::count(c.begin(), c.end(), 1);


	using namespace std::ranges;
	int n4 = count(c, 1);
	int n5 = count(c.begin(), c.end(), 1);
}