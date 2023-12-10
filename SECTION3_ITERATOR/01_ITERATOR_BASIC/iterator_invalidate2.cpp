#include <list>
#include <vector>

int main()
{
	int n = 0;
	std::vector c{1,2,3,4};

	auto it = c.begin();	
	n = *it;

	c.resize(2); // 크기를 줄일때
	n = *it;

	c.resize(3);
	n = *it;

	c.resize(6);
	n = *it;
}
