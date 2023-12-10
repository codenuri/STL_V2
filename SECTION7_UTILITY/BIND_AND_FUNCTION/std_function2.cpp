#include <functional>
using namespace std::placeholders;

void f1(int a)        {}
void f2(int a, int b) {}

struct Window
{
	void set_width(int w) {}
};
int main()
{
	std::function<void(int)> f = &f1;

	f(10);	// f1(10)

	int n = 0;
	f = [ ](int a) {};	// ok
	f = [n](int a) {};	// ok

//	f = &f2; // error
	f = std::bind(&f2, _1, 0);
	f(10); // f2(10, 0)

	Window w;
//	f = &Window::set_width;	// error
	f = std::bind(&Window::set_width, &w, _1);
	f(10); // w.set_width(10)
}