namespace Graphics
{
	struct Point
	{
		int x, y;
	};
	void draw_pixel(const Point& pt) {}
};

int main()
{
	Graphics::Point pt{1, 2};

	Graphics::draw_pixel(pt);

	draw_pixel(pt); // ok
}