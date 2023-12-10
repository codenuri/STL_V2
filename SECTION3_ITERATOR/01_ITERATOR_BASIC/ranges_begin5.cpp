#include <vector>
#include <string>
#include <string_view>
#include <ranges>
#include <print>

struct MyType1
{
	int begin() { return 0; }
	int end()   { return 0; }
};

struct MyType2
{
	int* begin() { return 0; }
	int* end()   { return 0; }
};

int main()
{	

	std::println("{}", std::ranges::range<std::string>);		// true
	std::println("{}", std::ranges::range<std::string_view>);	// true
	std::println("{}", std::ranges::range<std::vector<int>>);	// true
	std::println("{}", std::ranges::range<MyType1>);			// false
	std::println("{}", std::ranges::range<MyType2>);			// true


	std::println("{}", std::ranges::borrowed_range<std::string>);		// false
	std::println("{}", std::ranges::borrowed_range<std::string_view>);	// true
	std::println("{}", std::ranges::borrowed_range<std::vector<int>>);	// false 
}