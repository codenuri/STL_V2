#include <print>
#include <functional>

class Window
{
public:
	void move(int x, int y)
	{
		std::println("{}, {}, {}",
					 static_cast<void*>(this), x, y);
	}
};

int main()
{
	Window w;
	std::println("{}", static_cast<void*>(&w));
		
	auto f1 = std::bind(&Window::move, w,  1, 2);
	auto f2 = std::bind(&Window::move, &w, 1, 2);
	auto f3 = std::bind(&Window::move, std::ref(w), 1, 2);
	f1();
	f2();
	f3();
}