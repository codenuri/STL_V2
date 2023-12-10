#include <vector>
#include <list>
#include <deque>

int main()
{
	std::list   s{1,2,3,4,5};
	std::deque  d{1,2,3,4,5};
	std::vector v{1,2,3,4,5};

	// #1. 사용법이 유사하다.
	s.push_back(10);
	d.push_back(10);
	v.push_back(10);

	// #2. vector 는 앞쪽으로 삽입/삭제 할수 없다.
	s.push_front(10);
	d.push_front(10);
	v.push_front(10); // error

	// #3. [] 연산은 deque 와 vector 만 가능하다.
	s[0] = 10; 	// error
	d[0] = 10; 	// ok
	v[0] = 10; 	// ok
}