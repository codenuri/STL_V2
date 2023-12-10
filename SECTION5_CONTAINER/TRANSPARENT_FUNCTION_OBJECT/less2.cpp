#include <print>

template <typename T = void>
struct less
{
    bool operator()(const T& a, const T& b) const
    {
        return a < b;
    }
};

template<>
struct less<void>
{
    template <typename T1, typename T2>
    constexpr auto operator()(T1&& a, T2&& b) const
        -> decltype(std::forward<T1>(a) < std::forward<T2>(b))
    {
        return std::forward<T1>(a) < std::forward<T2>(b);
    }
};

int main()
{
    less<int>    f1;
	less<double> f2;

	less<void>   f3;
	less<>       f4;
	less         f5; // C++17

	std::println("{}", f1(3, 3.4)); // false
	std::println("{}", f5(3, 3.4)); // true

}