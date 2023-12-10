template<typename T>
class vector
{
	T* ptr;
	// ......
public:
	using size_type = std::size_t;

	void resize(size_type sz)
	{
		// 새롭게 메모리를 할당해야 한다면 
		// 어떤 방법을 사용하는 것이 좋을까 ?

	}
};
int main()
{
	vector<int> v{1,2,3,4};
	v.resize(8);
}
