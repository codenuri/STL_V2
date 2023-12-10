#include <functional>
#include <print>

int main()
{
	std::function<void(int)> f;

	try
	{
		f(10);
	}
	catch (const std::bad_function_call& e)
	{
		std::println("exception : {}", e.what());
	}

	if ( f )
		std::println("has target");
	else
		std::println("no target");

}