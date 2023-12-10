#include <vector>
#include <print>

int main()
{
	std::vector v(5, 0);
	v.resize(3);

	// v의 여분의 메모리를 제거하고 싶다
	// v.shrink_to_fit();		

	// shrink_to_fit() 이 없던 시절에 사용하던 기술
	std::vector<int>(v).swap(v); 

	std::println("{}, {}", v.size(), v.capacity());//3,3
}
