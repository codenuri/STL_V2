#include <map>
#include <print>

int main()
{
	std::map<std::string, std::string> m;

	m.emplace("sun", "일요일");

	auto ret1 = m["sun"]; // "일요일"
	auto ret2 = m["tue"]; // ""

	for (const auto& [key, value] : m)
		std::println("{}, {}", key, value);	
}
