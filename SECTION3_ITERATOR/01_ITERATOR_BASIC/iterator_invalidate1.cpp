#include <list>
#include <vector>

int main()
{
	int n = 0;
	std::vector c{1,2,3,4};
//	std::list   c{1,2,3,4};

	auto it = c.begin();	
	n = *it;
 
	c.resize(6); // 내부 버퍼 메모리 재할당
	n = *it;	 // bug. undefined!!
}
