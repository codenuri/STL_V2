#include <array>

int main()
{
	std::array<int, 5> a{1,2,3,4,5};

	// # 1. 요소 접근
	a[0] = 10;
	a.at(0) = 20;
	a.back()  = 10;
	a.front() = 10;
	
	// # 2. 반복자
	auto it1 = a.begin();
	auto it2 = a.end();

	// # 3. 삽입/삭제, 크기 변경등을 할수없음.
	a.push_back(1);	// error
	a.pop_back();	// error
	a.resize(10);	// error
	
	// # 4.
	auto r1 = a.size();
	auto r2 = a.empty();
}