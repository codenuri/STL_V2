#include <vector>
#include <algorithm>

int main()
{
	std::vector v{1,2,3,4,5};

//	auto it1 = v.begin();

	std::vector<int>::iterator         it1 = v.begin();
	std::vector<int>::reverse_iterator it2 = v.rbegin();
	std::vector<int>::const_iterator   it3 = v.cbegin();
	std::vector<int>::const_reverse_iterator   it4 = v.crbegin();

//	*it3 = 10; // error. const iterator

//	std::find(it1, it2, 3);
}
