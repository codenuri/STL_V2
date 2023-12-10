#include <vector>
#include <list>
#include <iterator>
#include <print>

void foo(auto it)
{
//	it = it + 3;
//	++it;++it;++it;
	
	std::advance(it, 3);

	std::println("{}", *it); // 4
}

int main()
{
	std::vector v{1,2,3,4,5,6,7,8,9,10};
//	std::list   v{1,2,3,4,5,6,7,8,9,10};

	foo( v.begin() );
}
