#include <ranges>

class MyType
{
public:
//	int begin() { return 0;}
//	int end()   { return 0;}

	int* begin() { return 0;}
	int* end()   { return 0;}
};

int main()
{
	MyType c;
//	auto it1 = std::begin(c);
//	*it1 = 10;

	auto it2 = std::ranges::begin(c);
}
