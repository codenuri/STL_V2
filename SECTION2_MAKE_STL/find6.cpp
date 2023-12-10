#include <print>

template<typename T1, typename T2>
constexpr T1 find(T1 first, T1 last, const T2& value)
{
	for(; first != last; ++first)
	{
		if (*first == value)
			return first;
	}
//	return nullptr;
	return last;
}

int main()
{
	double x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	double* p = find(x, x + 5, 7);

	if ( p == x+5 ) std::println("fail");
	else   		        std::println("success : {}", *p);
}
