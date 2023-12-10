#include <functional>

int main()
{
	int n = 10;

	std::reference_wrapper		      r1{n};
	std::reference_wrapper<int>    	  r2{n};
	std::reference_wrapper<const int> r3{n};

	r1.get() = 20; // ok	 int&
	r2.get() = 20; // ok	 int&
	r3.get() = 20; // error. const int&

	// use convenient function template
	auto r4 = std::ref(n);	// same r1 or r2
	auto r5 = std::cref(n);	// same r3

	r4.get() = 20;	// ok
	r5.get() = 20;	// error
}
