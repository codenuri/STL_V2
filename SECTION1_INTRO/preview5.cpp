#include <string>
#include <string_view>
#include <tuple>
#include <chrono>

int main()
{
	std::string      ss{"hello"};
	std::string_view sv{"hello"};

	std::tuple t1{1};
	std::tuple t2{1, 3.4};
	std::tuple t3{1, 3.4, 'A'};

	std::chrono::hours   h{1};
	std::chrono::seconds s{h};

	std::println("{}", s);
}