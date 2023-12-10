#include <print>
#include "buffer.h"

int main()
{
	Buffer b1{"mybuffer1", 4096};
	Buffer b2{"mybuffer2", 4096};

	Buffer b3 = b1;
	Buffer b4 = std::move(b2);

	std::println("{}", b1.size()); // 4096
	std::println("{}", b2.size()); // 0
}
