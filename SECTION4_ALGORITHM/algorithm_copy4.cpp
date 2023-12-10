#include <algorithm>
#include <vector>

int main()
{
	std::vector v1{1, 3, 6, 3, 5};
	std::vector v2{0, 0, 0, 0, 0};

	auto predicate = [](int n){ return n % 3 == 0;};

	// C++98
	auto ret1 = std::remove(v1.begin(), v1.end(), 3);
	auto ret2 = std::remove_if(v1.begin(), v1.end(), predicate);
	auto ret3 = std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);	
	auto ret4 = std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), predicate);


	// C++20 constrained algorithm
	namespace rgs = std::ranges;

	auto ret5 = rgs::remove(v1, 3);
	auto ret6 = rgs::remove_if(v1, predicate);
	auto ret7 = rgs::remove_copy(v1, v2.begin(), 3);	
	auto ret8 = rgs::remove_copy_if(v1, v2.begin(), predicate);
}