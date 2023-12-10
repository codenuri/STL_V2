#include <vector>
#include <filesystem>
#include <string>
#include <print>

int main()
{
	int x[4]{ 1,2,3,4 };
	std::vector v{ 1,2,3,4 };

	int* p1 = x;
	auto p2 = v.begin();
	std::filesystem::directory_iterator p3{"C:\\windows"};

	++p1;
	++p2;
	++p3;

	std::println("{}", *p1);
	std::println("{}", *p2);
	std::println("{}", (*p3).path().string());
}
