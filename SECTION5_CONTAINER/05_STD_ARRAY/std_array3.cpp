#include <print>

template<typename T, int N>
struct array
{
	T buff[N];	

	int size() const { return N;}
};

int main()
{
	array<int, 5> a{1, 2, 3, 4, 5};

	std::println("{}", sizeof(a)); // 20
	std::println("{}", a.size());  // 5 
}