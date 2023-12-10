template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);
	square(3);
}
