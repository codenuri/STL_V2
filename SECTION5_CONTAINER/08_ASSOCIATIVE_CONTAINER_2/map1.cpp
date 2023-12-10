#include <map>
#include <string>
#include <print>

int main()
{
	std::map<std::string, std::string> m = 
					{{"mon", "월요일"}, {"tue", "화요일"}};

	m.insert(std::make_pair("wed", "수요일"));
	m.insert({"thu", "목요일"});	

	m.emplace("fri", "금요일");

	m["sat"] = "토요일";
}
