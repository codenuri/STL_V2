#include <list>
#include <iterator>
#include "cmc.h"

int main()
{
	std::list s{1,2,3};

	// 방법 1.
	s.push_back(10);	 

	// 방법 2.
	std::back_insert_iterator bi{s};

	*bi = 20;	// s.push_back(20);
	*bi = 30;	// s.push_back(30);

	show(s);	// 1, 2, 3, 10, 20, 30
}
