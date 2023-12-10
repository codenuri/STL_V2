#include <vector>
#include <print>

int main()
{
	std::vector v{1, 2, 3, 4};

	auto sz1 = v.size();  // 권장

	std::vector<int>::size_type sz2 = v.size(); 
}

