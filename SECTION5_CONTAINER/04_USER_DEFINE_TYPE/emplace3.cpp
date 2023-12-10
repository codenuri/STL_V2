template<typename T, typename Alloc = std::allocator<T> >
class vector
{
public:
	// 함수 인자로 "요소와 같은 타입의 객체을 한개 받아서" 
	// 복사본 객체를 생성해서 보관
	void push_back(const T& obj) { new T(obj); }
	void push_back(T&& obj)      { new T(std::move(obj));}

	// 함수 인자로 "임의 타입의 임의 갯수를 받아서"
	// 객체 생성
	template<typename ... ARGS>
	decltype(auto) emplace_back(ARGS&& ... args)
	{
		new T(std::forward<ARGS>(args)...);

		// ......
	}
};
