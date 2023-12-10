#include <print>

template<typename T>
T* find(T* first, T* last, T c)
{
	for(; first != last; ++first)
	{
		if (*first == c)
			return first;
	}
	return nullptr;
}

int main()
{
	double x[] = {1,2,3,4,5,6,7,8,9,10};

	double* p = find(x, x+10, 10.0);

	if ( p == nullptr ) std::println("fail");
	else   		        std::println("success : {}", *p);
}
