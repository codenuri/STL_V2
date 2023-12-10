#include <vector>
#include <print>
#include "cmc.h"
/*
template<typename T>
class debug_alloc
{
public:
	using value_type = T;
	debug_alloc() = default;
	template<typename U> debug_alloc(debug_alloc<U>&) {}

	T* allocate(std::size_t sz)
	{
		void* ptr = malloc(sizeof(T) * sz);
		std::println("allocate : {}, {} cnts", static_cast<void*>(ptr), sz);
		return static_cast<T*>(ptr);
	}
	void deallocate(T* ptr, std::size_t sz)
	{
		std::println("deallocate : {}, {} cnts", static_cast<void*>(ptr), sz);
		free(ptr);
	}
};

template<typename T>
bool operator==(const debug_alloc<T>& a1, const debug_alloc<T>& a2) { return true; }

template<typename T>
bool operator!=(const debug_alloc<T>& a1, const debug_alloc<T>& a2) { return false; }
*/
int main()
{
	std::vector<int, debug_alloc<int> > v{1, 2, 3, 4};

	std::println("=============");

	v.resize(8);

	std::println("=============");
}
