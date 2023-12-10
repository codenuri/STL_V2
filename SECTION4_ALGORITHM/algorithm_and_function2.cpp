#include <vector>
#include <algorithm>
#include "cmc.h"

int main()
{
	std::vector v1{1, 2, 3, 4, 5};
	std::vector<int> v2;

	// v1의 모든 요소에 main 의 지역변수 k를 더한 결과를
	// v2에 추가 하고 싶다. 
	int k = 2;	

	std::ranges::transform(v1, 
						   std::back_inserter(v2),
						   [k](int n){ return n + k;} );
	show(v2);	
}

// int add_k(int n) { return n + k; }
