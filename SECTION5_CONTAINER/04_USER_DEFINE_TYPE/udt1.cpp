#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{a}, y{b} {}
};

int main()
{
	std::vector<Point> v1;		// ok
//	std::vector<Point> v2(4);	// error
	std::vector<Point> v2(4, Point{0, 0});	// ok

//	v2.resize(8); // error
	v2.resize(8, Point{0, 0}); // ok
}
