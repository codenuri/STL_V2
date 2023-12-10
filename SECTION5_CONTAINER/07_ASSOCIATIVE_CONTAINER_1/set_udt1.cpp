#include <set>
#include <string>
#include <print>

struct People
{
	int id;
	std::string name;
};

struct PeopleCompare
{
	bool operator()(const People& p1, 
					const People& p2) const
	{
		return p1.id < p2.id;
	}
};

int main()
{
	std::set<People, PeopleCompare> s;

	s.emplace(1, "kim");
	s.emplace(2, "lee");
	s.emplace(3, "park");
}