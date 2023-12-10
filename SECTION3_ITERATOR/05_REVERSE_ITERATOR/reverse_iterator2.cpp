#include <vector>
#include <algorithm>
#include <iterator>

int main()
{	
	std::vector v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	auto it = std::next(v.begin(), 5);
	
	// #1.
	std::reverse_iterator ri1{ it };
	std::reverse_iterator<std::vector<int>::iterator> ri2{ it };

	// #2. 
	auto ri3 = std::make_reverse_iterator(it);
}