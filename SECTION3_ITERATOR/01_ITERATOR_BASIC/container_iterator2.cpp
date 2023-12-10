#include <list>
#include <vector>

int main()
{
	std::vector v{1,2,3,4,5,6,7,8,9,10};

	auto first = v.begin();	
	auto last  = v.end();	

	*first = 10; // ok
//	*last  = 10; // runtime error

	while( first != last )
	{
		// ... 		
		++first;
	}
}
