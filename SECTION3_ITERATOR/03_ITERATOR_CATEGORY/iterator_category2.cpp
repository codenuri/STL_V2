#include <list>
#include <forward_list>
#include <vector>
#include <algorithm>

int main()
{ 
	std::list 	      ds{1, 2, 3, 4};
	std::forward_list fs{1, 2, 3, 4};
	std::vector       ve{1, 2, 3, 4};

	std::reverse( ds.begin(), ds.end() );
//	std::reverse( fs.begin(), fs.end() ); // error 
	std::reverse( ve.begin(), ve.end() );	
}