#include <vector>

void f1(auto& c)
{
	auto p = c.begin();
	auto s = c.size();
}
void f2(auto& c)
{
	auto p = std::begin(c);
	auto s = std::size(c);
}
int main()
{
	int x[]{1,2,3,4};
	std::vector c{1,2,3,4};

	f1(c); // ok
//	f1(x); // error
	f2(c); // ok
	f2(x); // ok
}
