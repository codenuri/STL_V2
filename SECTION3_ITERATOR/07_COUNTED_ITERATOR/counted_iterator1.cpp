#include <print>
#include <vector>
#include <iterator>

int main()
{
	std::vector v{ 1,2,3,4,5,6,7,8,9,10 };

	auto it = v.begin();

	std::counted_iterator ci{it, 5};

	++it; 
	++ci;

	std::println("{}, {}", *it, *ci); 	// 2, 2

	std::println("{}", ci.count()); 	// 4

	while (ci.count() != 0)
	{
		std::println("{}", *ci++);
	}






	++ci;
	std::println("{}", ci.count());  // -1
//	std::println("{}", *ci);	     // undefined 
}

