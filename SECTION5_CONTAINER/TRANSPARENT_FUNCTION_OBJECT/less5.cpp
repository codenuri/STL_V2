#include <functional>
#include <algorithm>

template<typename T> 
void f1(T f) {}

template<typename T = std::less<void>> 
void f2(T f) {}

int main()
{
	f1(std::less<int>{});
	f1(std::less{});
//	f1({});		// error

	f2(std::less<int>{});
	f2(std::less{});
	f2({}); 	// ok
}