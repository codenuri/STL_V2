#include <list>
#include <iterator>
#include "cmc.h"

int main()
{
	std::list s{1,2,3};

	// 1. using class template
	std::back_insert_iterator bi1{ s }; 					
	std::back_insert_iterator< std::list<int> > bi2{ s }; 
	
	// 2. using convenient function template
	auto bi3 = std::back_inserter(s);

	*bi1 = 10;
	*bi2 = 20;
	*bi3 = 30;

	show(s);	// 1, 2, 3, 10, 20, 30
}
