#include <vector>
#include <algorithm>
#include <print>

class Point
{
public:
	int x, y;
public:
	Point(int a, int b) : x{a}, y{b} {}
	void print() const { std::println("{}, {}", x, y);}

	auto operator<=>(const Point&) const = default;
};

int main()
{
	std::vector<Point> v{{0, 0}, {3, 3}, {2, 2}, {1, 1}};

//	std::sort(v.begin(), v.end());

	std::sort(v.begin(), v.end(),
		[](const Point& p1, const Point& p2)
			{ return p1.x > p2.x;});

	for( const auto& e : v)
		e.print();
}