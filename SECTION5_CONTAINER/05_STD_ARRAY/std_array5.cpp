#include <array>
#include <print>

int main()
{
	int x1[3]{1,2,3};
	int x2[3] = x1;	// error

	std::array<int, 3> a1{1,2,3};
	std::array<int, 3> a2 = a1; // ok

	int* px = x1;  // ok
//	int* pa = a1;  // error		 
	int* pa = a1.data(); // ok
}
