#include <print>
#include <vector>
#include <functional>

struct Point
{
	int x, y;
};
int main()
{
	Point p1{1, 1};
	Point p2{2, 2};

//	std::vector<Point&> v;
	std::vector<std::reference_wrapper<Point>> v;

	v.push_back(p1);
	v.push_back(p2);

	v[0].get().x = 20;

	std::println("{}", p1.x);
}