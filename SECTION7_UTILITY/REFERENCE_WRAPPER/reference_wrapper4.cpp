#include <print>

template<typename T> class reference_wrapper
{
	T* pobj{};
public:
	reference_wrapper(T& obj) : pobj{&obj} {}
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	reference_wrapper r1{n1}; 
	reference_wrapper r2{n2};

	r1 = r2;				
}
