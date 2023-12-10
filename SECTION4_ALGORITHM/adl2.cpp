namespace Graphics
{
	struct Point
	{
		int x, y;
	};
	Point operator+(const Point& p1, 
					const Point& p2)
	{
		return Point{p1.x + p2.x, p1.y + p2.y};
	}
};

int main()
{
	Graphics::Point p1{1, 1};
	Graphics::Point p2{2, 2};
	
	auto ret1 = Graphics::operator+(p1, p2);
	auto ret2 = p1 + p2;	// operator+(p1, p2);
}