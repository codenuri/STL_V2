void f1(int a)        {}
void f2(int a, int b) {}

struct Window
{
	void set_width(int w) {}
};

int main()
{
	void(*f)(int); 

	f = &f1;	// ok
	f = &f2;	// error.
	f = &Window::set_width;	// error

	int n = 0;
	f = [ ](int a) { };	// ok
	f = [n](int a) { };	// error 
}