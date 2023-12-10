#include <print>

namespace std
{
	template <typename T = void>
	struct less
	{
		bool operator()(const T& a, const T& b) const
		{
			return a < b;
		}
	};

	template<>
	struct less<void>
	{
		template <typename T1, typename T2>
		constexpr auto operator()(T1&& a, T2&& b) const
			-> decltype(std::forward<T1>(a) < std::forward<T2>(b))
		{
			return std::forward<T1>(a) < std::forward<T2>(b);
		}

		using is_transparent = int;
	};

	namespace ranges
	{
		struct less 
		{
			template <typename T1, typename T2> requires std::totally_ordered_with<T1, T2>
			constexpr auto operator()(T1&& a, T2&& b) const
				-> decltype(std::forward<T1>(a) < std::forward<T2>(b))
			{
				return std::forward<T1>(a) < std::forward<T2>(b);
			}

			using is_transparent = int;
		}
	}
}

int main()
{
	std::less<int> f1; // ok
	std::less      f2; // ok. std::less<void>

	std::ranges::less<int> f3; // error
	std::ranges::less      f4; // ok
}