#include <iterator>
#include <print>


// int*       p1{100번지}; ++p1;   => 104
// myiterator p2{100번지}; ++p2;   => 104
class myiterator
{
	int* current;
public:
	myiterator(int* p = nullptr) : current{p} {}

	myiterator& operator++() { ++current; return *this;}
	int& operator*()         { return *current;}
};



int x[5]{1,2,3,4,5};

int*       get_raw_pointer() { return &x[0];}
myiterator get_myiterator()  { return &x[0];}

int main()
{
//	auto it1 = ++get_raw_pointer(); // error
	auto it2 = ++get_myiterator();
	
	std::println("{}", *it2); // 2
}