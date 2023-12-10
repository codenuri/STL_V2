#include <vector>
#include <print>

struct Object
{
	Object()  { std::println("{}", __func__);}
	~Object() { std::println("{}", __func__);}
};

int main()
{
	std::vector<Object> v1(5); // 생성자 5회
	
	std::println("1 ==================");

	v1.resize(3);	// 소멸자 2회
	
	std::println("2 ==================");
	
	v1.resize(4); 	// or v1.push_back(객체)
					// 생성자 1회
	
	std::println("3 ==================");
	
	std::vector<Object> v2;
	v2.reserve(5);

	std::println("4 ==================");
	
	v2.resize(1); 	// 생성자 1회 호출

	std::println("5 ==================");
}