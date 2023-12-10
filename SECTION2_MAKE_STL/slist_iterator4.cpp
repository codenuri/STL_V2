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

template<typename T1, typename T2>
constexpr T1 find(T1 first, T1 last, const T2& c)
{
	for( ; first != last; ++first)
	{
		if (*first == c)
			return first;
	}
	return last;
}

int main()
{
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);
	
	auto ret = find(s.begin(), s.end(), 30);

	if ( ret == s.end() )
		std::println("fail");
	else 
		std::println("{}", *ret);

}