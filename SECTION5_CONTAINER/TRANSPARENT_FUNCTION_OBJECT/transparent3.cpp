#include <set>
#include <string>
#include <print>

struct People
{
	int id;
	std::string name;
};
bool operator<(const People& p1, const People& p2) { return p1.id < p2.id; }
bool operator<(const People& p, int id) { return p.id < id; }
bool operator<(int id, const People& p) { return id < p.id; }	

int main()
{
//	std::set<People> s; 
//	std::set<People, std::less<People> > s; // 결국 < 로 비교 
	std::set<People, std::less<void> > s; 
	
	s.emplace(1, "lee");
	s.emplace(2, "kim");

	auto ret1 = s.find(People{1, "lee"}); // ok

	auto ret2 = s.find(1);
	std::println("{}, {}", ret2->name, ret2->id);
}