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
	void push_front(const T& data) 
	{
		head = new Node<T>(data, head);
	}

	slist_iterator<T> begin()
	{
		return slist_iterator<T>{head};
	}
	slist_iterator<T> end()
	{
		return slist_iterator<T>{nullptr};
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

	slist_iterator<int> p1 = s.begin();
	slist_iterator<int> p2 = s.end();

	while( p1 != p2 )
	{
		std::print("{}, ", *p1);
		++p1;
	}
}