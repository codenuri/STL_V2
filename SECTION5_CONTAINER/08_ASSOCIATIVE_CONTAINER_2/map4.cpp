#include <map>
#include <print>

int main()
{
	std::map<std::string, std::string> m;

	m.emplace("sun", "일요일");

	// # bad. 새로운 항목을 추가하는 코드
	if ( m["mon"] != "")      { }

	// # good. C++20 ~ 
	if ( m.contains("tue") )  {  }

	// # good. ~ C++17
	if ( m.find("wed") != m.end() )  {	}


	for (const auto& [key, value] : m)
		std::println("{}, {}", key, value);	
}

