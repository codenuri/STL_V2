#include <print>
#include <vector>
#include <type_traits>

template<typename T>
concept resizable = requires(T& c)
{
	c.resize(int{});
};

template<typename T>
void foo(const T& arg)
{
	bool b1 = std::is_pointer_v<T>;
	bool b2 = resizable<T>;

	std::println("{}, {}", b1, b2);
}

int main()
{
	int n = 0;
	std::vector v{1,2,3};

	foo(&n); // true, false
	foo(v);  // false, true
}