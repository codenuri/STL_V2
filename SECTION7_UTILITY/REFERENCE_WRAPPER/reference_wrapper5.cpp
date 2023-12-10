#include <print>

template<typename T> class reference_wrapper
{
	T* pobj{};
public:
	reference_wrapper(T& obj) : pobj{&obj} {}

	operator T&() const { return *pobj;}	

	T& get() const { return *pobj;}
};

int main()
{
	int n = 10;

	reference_wrapper r1{n}; 

	int& r2 = r1;
	int& r3 = r1.get();
}
