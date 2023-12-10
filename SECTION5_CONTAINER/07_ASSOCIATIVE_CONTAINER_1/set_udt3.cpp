#include <set>
#include <string>
#include <print>

struct People
{
	int id;
	std::string name;
};

template<>
class std::less<People>
{
public:
	bool operator()(const People& p1, 
					const People& p2) const
	{
		return p1.id < p2.id;
	}
};

int main()
{
	std::set<People> s;	
// 	std::set<People, std::less<People>> s;

	s.emplace(1, "kim");
	s.emplace(2, "lee");
	s.emplace(3, "park");
}