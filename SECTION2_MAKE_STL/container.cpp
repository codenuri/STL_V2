template<typename T> struct Node
{
	T     data;
	Node* next;
	Node(const T& d, Node* n) : data{d}, next{n} {}
};

template<typename T> class slist
{
	Node<T>* head{nullptr};
public:
	void push_front(const T& data) 
	{ 
		head = new Node<T>(data, head);
						//  10,  0
						//  20,  100
						//  30,  200
	}
};

int main()
{
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);
}