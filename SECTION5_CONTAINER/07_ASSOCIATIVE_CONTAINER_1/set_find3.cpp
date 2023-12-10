#include <set>
#include <algorithm>
#include <print>

int main()
{
	std::set s{ 50, 30, 70, 40, 60, 20, 80};

	if ( s.contains(70) )
		std::println("s contains 70");


	auto ret = s.find(70); 	

	if (ret != s.end() )
		std::println("s contains 70");
}