#include <vector>
#include <list>
#include <print>

int main()
{
	// 1. list 와 vector 가 요소를 
	//    저장하는 방식(내부 구조)은 다르지만
	std::list   s{1,2,3,4};
	std::vector v{1,2,3,4};

	// 2. 동일한 방법으로 반복자(iterator) 를 얻어서
	auto si = s.begin();
	auto vi = v.begin();

	// 3. 동일한 방식으로 이동하고 
	//    동일한 방식으로 요소접근
	++si;
	++vi;

	std::println("{}", *si);
	std::println("{}", *vi);
}
