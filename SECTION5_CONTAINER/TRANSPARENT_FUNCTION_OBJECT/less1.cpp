#include <print>

template <typename T>
struct less
{
    typedef T first_argument_type;
    typedef T second_argument_type;
    typedef bool result_type;

    bool operator()(const T& a, const T& b) const
    {
        return a < b;
    }
};
int main()
{
    less<int> f1;
    
    std::println("{}", f1(3, 4));   // true
	std::println("{}", f1(3, 3.4));	// false 
}