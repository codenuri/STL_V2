#include <set>
#include <print>

int main()
{
	std::set s{ 50, 30, 70, 40, 60 };

	// #1. 요소 삽입 방법	
	s.insert(20);
	s.emplace(80);	
//	s.push_back(20);	// error
//	s.insert_range(std::vector{45, 55});	// C++23


	// 2. 중복을 허용하지 않음.
	auto ret = s.insert(40);

	if ( ret.second == false )
		std::println("insert fail");	
}
