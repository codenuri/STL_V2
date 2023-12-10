#include <list>
#include <algorithm>

int main()
{
	std::list s{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	// #1
//	std::sort( s.begin(), s.end() );			// error
//	std::ranges::sort( s.begin(), s.end() );	// error
//	std::ranges::sort( s );						// error
	s.sort();	// ok

	// #2
	c.erase(std::remove(c.begin(),c.end(),3), c.end());
						// ok. bad
	c.remove(3);		// ok. good
}

