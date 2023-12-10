#include <print>
#include <functional>

int main()
{
	int n1 = 10;
	int n2 = 20;

	std::reference_wrapper r1{n1}; 
	std::reference_wrapper r2{n2};

//	r1 = r2;				// p1 = p2
	r1.get() = r2.get();	// *p1 = *p2

	std::println("{}, {}", n1, n2);		
	std::println("{}, {}", r1.get(), r2.get());	
}