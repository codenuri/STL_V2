#include <map>
#include <string>
#include <print>

int main()
{
	std::map<std::string, std::string> m;
	m.emplace("wed", "수요일");
	m.emplace("thu", "목요일");	
	m.emplace("fri", "금요일");

	auto first = m.begin();
	auto last  = m.end();

	while( first != last )
	{
		std::println("{}, {}", first->first, first->second);	
		++first;
	}

	for (const auto& e : m)
	{	
		// e 는 std::pair&
		std::println("{}, {}", e.first, e.second);	
	}

	for (const auto& [key, value] : m)
	{
		std::println("{}, {}", key, value);	
	}
}