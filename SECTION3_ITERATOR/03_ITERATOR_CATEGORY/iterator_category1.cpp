#include <list>
#include <forward_list>

int main()
{ 
	std::list 		  ds{1, 2, 3, 4}; 
	std::forward_list ss{1, 2, 3, 4}; 

	auto p1 = ds.begin(); 
	auto p2 = ss.begin(); 

	++p1;
	++p2;

	--p1;	// ?
//	--p2; 	// error
}