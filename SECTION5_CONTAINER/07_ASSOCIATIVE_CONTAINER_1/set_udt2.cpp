#include <set>
#include <string>
#include <print>

struct People
{
	int id;
	std::string name;

/*
	// C++98~
	bool operator<(const People& other) const
	{
		return id < other.id;
	}
	*/
	// C++20
	auto operator<=>(const People& other) const = default;
};

int main()
{
	std::set<People> s;

	s.emplace(1, "kim");
	s.emplace(2, "lee");
	s.emplace(3, "park");
}
