#include <vector>

void fn(int* p, int sz)
{
}

int main()
{
	int x[4] = {1,2,3,4};
	fn(x, 4);

	std::vector v{1,2,3,4};
//	fn(v, v.size()); // error
//	fn(&v, v.size()); // error
	fn(&v[0], v.size()); // ok
	fn(v.data(), v.size()); // ok
}
