#include <vector>
#include <stack>
#include <print>

int main()
{
	std::vector v{1,2,3};

	// #1. stack 생성
	std::stack<int> s1;
	std::stack<int, std::vector<int>> s2{v};

	std::println("{}, {}", s2.size(), s2.top()); // 3, 3

	// #2. 요소 넣기
	s2.push(5);		  	
	s2.push_range(v); // C++23
	s2.emplace(9);	  // C++11

	std::println("{}, {}", s2.size(), s2.top()); // 8, 9

	// #3. 반복자가 없다.
//	auto p1 = s2.begin(); // error
//	for( auto e : s2) {}  // error
}