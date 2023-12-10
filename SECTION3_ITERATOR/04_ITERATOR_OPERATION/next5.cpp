#include <iterator>
#include <print>

class myiterator
{
	int* current;
public:
	myiterator(int* p = nullptr) : current{p} {}

	myiterator& operator++() { ++current; return *this;}
	int& operator*()         { return *current;}
};

class MyContainer
{
	int data[5]{1,2,3,4,5};
public:
	using iterator = myiterator;

	iterator begin() { return data; }
	iterator end()   { return data + 5; }
};

int main()
{
	MyContainer mc;
	auto it = ++mc.begin();	
	std::println("{}", *it);
}