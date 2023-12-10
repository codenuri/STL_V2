#include <vector>
#include <list>

template<typename T1, typename T2>
struct pair
{
	T1 first;
	T2 second;

	pair(const T1& a, const T2& b) 
		: first(a), second(b) {}
};

template<typename T1, typename T2> 
pair<T1, T2> make_pair(const T1& a, const T2& b)
{
	return pair<T1, T2>(a, b);
}

int main()
{
	std::list<int>   s{1,2,3};
	std::vector<int> v{1,2,3};

//	pair p1{s, v};
//	pair<std::list<int>, std::vector<int>> p1{s, v};

//	auto p1 = make_pair<std::list<int>, std::vector<int>>(s, v);
	auto p1 = make_pair(s, v);
}
