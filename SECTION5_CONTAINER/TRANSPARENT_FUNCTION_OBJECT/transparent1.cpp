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
	bool operator()(const People& p1, const People& p2) const 
	{	
		return p1.id < p2.id; 
	}
};	
int main()
{
	std::set<People, PeopleCompare> s;

	s.emplace(1, "lee");
	s.emplace(2, "kim");

//	People p{1, "lee"};
//	auto ret = s.find(p);
	auto ret = s.find(1);

	std::println("{}, {}", ret->name, ret->id);
}