#include <print>

namespace mystd
{
	class string {};

	template<typename T> 
	void max(const T& a, const T& b) { std::println("std::max"); }

	namespace ranges
	{
//		template<typename T> 
//		void max(const T& a, const T& b) { std::println("std::ranges::max"); }

		struct max_fn
		{
			template<typename T> 
			void operator()(const T& a, const T& b) { std::println("std::ranges::max"); }
		};

		max_fn max;
	}
}

int main()
{
	mystd::string s1, s2;

	mystd::max(s1, s2);
	mystd::ranges::max(s1, s2);

//	using namespace mystd::ranges;
	max(s1, s2);
}