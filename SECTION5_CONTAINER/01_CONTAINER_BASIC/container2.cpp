#include <stack>
#include <vector>
#include <print>

int main()
{
	std::vector v{1, 2, 3, 4};

//	auto n1 = v.pop_back(); // error
	auto n2 = v.back();     // ok. 단, 제거 안됨
	v.pop_back();

	std::stack<int> s;
	s.push(10);
	s.push(20);
	std::println("{}", s.top()); // 20
	s.pop();
	std::println("{}", s.top()); // 10
}

