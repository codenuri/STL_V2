#include <cstring>
#include <print>

char* mystrchr(char* s, int c)
{
	while ( *s != c )
	{
		if (!*s++)
			return nullptr;
	}	
	return s;
}

int main()
{
	char s[] = "abcdefg";

//	char* p = mystrchr(s, 'c');
	char* p = mystrchr(s, 'k');

	if ( p == nullptr ) 
		std::println("fail");
	else   		        
		std::println("success : {}", *p);
}
