#include <print>
#include <functional>
using namespace std::placeholders;

int mul(int a, int b) { return a * b; }

struct Add 
{
	int operator()(int a, int b) const { return a + b;}
};

template<>
struct std::is_bind_expression<Add> : public std::true_type{};


int main()
{	
	std::println("{}", std::is_bind_expression_v<Add> );


	auto f1 = std::bind(&mul, Add{}, 2);

	std::println("{}", f1(3,4));
					// mul( add(3,4), 2)

}
