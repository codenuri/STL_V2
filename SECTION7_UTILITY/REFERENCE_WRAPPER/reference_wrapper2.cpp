int main()
{
	int n1 = 10;
	int n2 = 20;

	int* p1 = &n1;
	int* p2 = &n2;

	p1 = p2;
	*p1 = *p2;

	int& r1 = n1;
	int& r2 = n2;

	r1 = r2;
}