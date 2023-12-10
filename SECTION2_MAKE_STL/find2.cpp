#include <print>

char* mystrchr(char* first, char* last, int c)
{
	for(; first != last; ++first)
	{
		if (*first == c)
			return first;
	}
	return nullptr;
}

int main()
{
	char s[] = "abcdefg";

	char* p = mystrchr(s, s+4, 'c');

	if ( p == nullptr ) std::println("fail");
	else   		        std::println("success : {}", *p);
}
