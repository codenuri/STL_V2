#include <print>

int* next(int* addr) { return ++addr; }

int x[5]{1,2,3,4,5};

int* address_of_x() { return &x[0]; }

int main()
{
//	int* p1 = ++( &x[0] ); // error

//	int* p2 = ++( address_of_x() ); // error

	int* addr = &x[0];

	int* p3 = ++addr;		// ok

	int* p4 = next( &x[0] ); // ok

	std::println("{}, {}", *p3, *p4);
}
