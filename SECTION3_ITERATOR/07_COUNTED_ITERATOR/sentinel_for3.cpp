#include <iterator>

/*
template<typename T>
void find_cpp98(T first, T last) {}

template<typename I, typename S>
void find_cpp20(I first, S last) {}
*/

template<typename InputIter>
void find_cpp98(InputIter first, InputIter last) {}

template<std::input_or_output_iterator I, 
		 std::sentinel_for<I> S>
void find_cpp20(I first, S last) {}


int main()
{
}

