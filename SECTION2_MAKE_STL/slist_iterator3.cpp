#include <print>

template<typename T> struct Node
{
	T     data;
	Node* next;
	Node(const T& d, Node* n) : data{d}, next{n} {}
};

template<typename T> class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr)
		: current{p}
	{
	}

	slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}
	T& operator*() 
	{
		return current->data;
	}	
	bool operator==(const slist_iterator& it) const 
	{
		return current == it.current;
	}
	bool operator!=(const slist_iterator& it) const 
	{
		return current != it.current;
	}	
};

template<typename T> class slist
{
	Node<T>* head{nullptr};
public:

	using iterator = slist_iterator<T>;

	void push_front(const T& data) 
	{
		head = new Node<T>(data, head);
	}


	iterator begin()
	{
		return iterator{head};
	}
	iterator end()
	{
		return iterator{nullptr};
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

//	slist<int>::iterator p1 = s.begin();
//	slist<int>::iterator p2 = s.end();

	auto p1 = s.begin();
	auto p2 = s.end();


	while( p1 != p2 )
	{
		std::print("{}, ", *p1);
		++p1;
	}
}