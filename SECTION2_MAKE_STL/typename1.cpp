struct Test
{
	static constexpr int value = 10;
	using DWORD = int;
};
int p1 = 0;

template<typename T>
void foo(T a)
{
	// 아래 코드에서 * 연산자의 의미는 ?
//	Test::value * p1; // 곱하기 의미
//	Test::DWORD * p2; // 포인터 변수 선언

	T::value * p1; // ok
//	T::DWORD * p2; // 곱하기 p2 해석
					// p2가 없으므로 에러
	typename T::DWORD * p2; // p2를 선언
}

int main()
{
}