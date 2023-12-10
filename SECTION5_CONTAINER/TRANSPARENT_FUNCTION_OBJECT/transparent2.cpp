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
	bool operator()(const People& p, int id) const 
	{ 
		return p.id < id; 
	}
	bool operator()(int id, const People& p) const 
	{ 
		return id < p.id; 
	}	
	using is_transparent = int;
};	

int main()
{
	std::set<People, PeopleCompare> s;

	s.emplace(1, "lee");
	s.emplace(2, "kim");

	auto ret = s.find(1);

	std::println("{}, {}", ret->name, ret->id);
}