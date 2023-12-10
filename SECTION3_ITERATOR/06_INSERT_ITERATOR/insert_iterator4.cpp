#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
#include "cmc.h"

int main()
{
	using namespace std::ranges;

	std::vector v{ 1, 2, 3, 4, 5 };

	std::list s1{ 0, 0, 0, 0, 0 };
	std::list s2{ 0, 0, 0, 0, 0 };

	copy(v, s1.begin());			// overwrite			
	copy(v, std::back_inserter(s2));// insert

	show(s1);	// 1, 2, 3, 4, 5
	show(s2);	// 0, 0, 0, 0, 0, 1, 2, 3, 4, 5

	std::list<int> s3;
//	copy(v, s3.begin());				// runtime error
	copy(v, std::back_inserter(s3));	// ok
}