#include <iterator>
#include <print>

class MyContainer
{
	int data[5]{1,2,3,4,5};
public:
	using iterator = int*;

	iterator begin() { return data; }
	iterator end()   { return data + 5; }
};

int main()
{
	MyContainer mc;

	auto it1 = mc.begin();
	++it1;
	std::println("{}", *it1); 

//	auto it2 = ++mc.begin();		// error
	auto it3 = std::next(mc.begin());
	auto it4 = std::ranges::next(mc.begin());
}