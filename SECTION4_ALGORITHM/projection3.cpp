#include <vector>
#include <algorithm>
#include <print>

struct Point 
{
	int x, y;
	int get_y() const { return y;}
};
int main()
{
	namespace rgs = std::ranges;
	std::vector<Point> v{{1,1},{2,2},{3,3},{4,4}};

	auto ret1 = rgs::find(v, 3, &Point::y);	

	auto ret2 = rgs::find(v.begin(),v.end(),3, &Point::y);

	auto ret3 = rgs::find_if(v,
							 [](int n){return n == 1;}, 
							 &Point::y);
}