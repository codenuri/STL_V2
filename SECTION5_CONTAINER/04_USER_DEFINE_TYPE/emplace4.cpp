#include <vector>
class Point
{
public:
	explicit Point(int a) {}
	Point(int a, int b) {}
	Point(const Point&) {}
};
int main()
{
	std::vector<Point> v;

//	v.push_back(1, 2);		// error
	v.emplace_back(1, 2);	// ok. Point(int a, int b)

	Point pt(1,2);
	v.push_back(pt);		// ok. Point(const Point&)
	v.emplace_back(pt);		// ok. Point(const Point&)

//	v.push_back(1);			// ok
							// 1 => Point 임시객체 생성
							// push_back(임시객체)
							// 단, explicit 라면 에러
	v.emplace_back(1);		// ok. Point(int a)
}
