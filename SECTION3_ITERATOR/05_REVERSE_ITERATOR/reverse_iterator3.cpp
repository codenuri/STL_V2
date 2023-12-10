#include <vector>
#include <algorithm>
#include <iterator>

int main()
{	
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto first = v.begin();
	auto last  = v.end();

	auto rfirst = v.rbegin(); 
	auto rlast  = v.rend();   

	// auto rfirst = std::make_reverse_iterator(v.end());
	// auto rend   = std::make_reverse_iterator(v.begin());

	auto ri1 = std::rbegin(v);
	auto ri2 = std::ranges::rbegin(v);
}