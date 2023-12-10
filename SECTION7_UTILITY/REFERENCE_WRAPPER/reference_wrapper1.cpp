int main()
{
	int n = 10;

	int* p = &n;
	int& r = n;

	*p = 20;
	r  = 20;
}