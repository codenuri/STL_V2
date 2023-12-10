#include <vector>
#include <array>
#include "cmc.h"
constexpr std::size_t cnt = 1000000;

void f1()
{
	for(int i = 0; i < cnt; i++) 
	{
//		std::vector<int> v{1,2,3,4,5};
		std::array<int, 5> v{1,2,3,4,5};
	}
}
void f2()
{
	for(int i = 0; i < cnt; i++) 
	{
		int x[5]{1,2,3,4,5};
	}
}
int main()
{
	chronometry(f1);
	chronometry(f2);
}