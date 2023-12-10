#include <vector>
#include <algorithm>
#include <print>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{a}, y{b} {}
	void print() const { std::println("{}, {}", x, y);}
	auto operator<=>(const Point& other) const = default;
};

int main()
{
	std::vector<Point> v{{0, 0}, {3, 3}, {2, 2}, {1, 1}};

	std::sort(v.begin(), v.end());

	for( const auto& e : v)
		e.print();
}