template<typename T, typename Alloc = std::allocator<T> >
class vector
{
	T* ptr;
	Alloc ax;
public:
	using size_type = std::size_t;

	void resize(size_type sz)
	{
		ptr = ax.allocate(sz);

		ax.deallocate(ptr, sz);
	}
};

int main()
{
	vector<int> v{1,2,3,4};
	v.resize(8);
}
