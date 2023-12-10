#include <tuple>
#include <iterator>

int main()
{
	std::tuple<int, double, char> t1{1, 3.4, 'A'};
	std::tuple t2{1, 3.4, 'A'};

	auto t3 = std::make_tuple(1, 3.4, 'A');



	std::vector<int> v{1,2,3};

	std::reverse_iterator<std::vector<int>::iterator> r1( v.end() );
	std::reverse_iterator r2( v.end() );

	auto r3 = std::make_reverse_iterator( v.end());

}