#include <vector>
#include <print>

int main()
{
	std::vector v{1,2,3,4};

	v.front() = 0;	
	v.back()  = 0;
	v[2]      = 0;
	v.at(2)   = 0;

	try
	{
//		v.at(20) = 0;
		v[20] = 0;		
	}
	catch(std::exception& e)
	{
		std::println("catch : {}", e.what() );
	}


	auto sz = v.size();

	for( int i = 0; i < sz; i++)
	{
		v[i] = 0;		// good
//		v.at(i) = 0;	// bad
	}
}
