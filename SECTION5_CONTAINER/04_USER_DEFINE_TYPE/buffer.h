#include <string>
#include <print>

class Buffer
{
	std::string desc;
	std::size_t sz;
	char* ptr;
public:
	Buffer(const std::string& desc, std::size_t size) 
		: desc{ desc }, sz{ size }, ptr{ new char[size] } 	
	{
		std::println("Buffer Constructor");
	}
	Buffer(std::string&& desc, std::size_t size) 
		: desc{ std::move(desc) }, sz{ size }, ptr{ new char[size] }
	{
		std::println("Buffer Constructor");
	}
	~Buffer()
	{
		if (ptr) 
			delete[] ptr;
		std::println("Buffer Destructor");
	}

	Buffer(const Buffer& other)
		: desc{ other.desc }, sz{ other.sz }
	{		
		ptr = new char[sz];
		memcpy(ptr, other.ptr, sz);

		std::println("Buffer Copy Constructor");
	}

	Buffer(Buffer&& other) noexcept
		: desc{ std::move(other.desc) }, sz{ other.sz }, ptr{other.ptr}
	{
		other.ptr = nullptr;
		other.sz = 0;
		std::println("Buffer Move Constructor");
	}
	int size() const { return sz;}

	Buffer& operator=(const Buffer&) = delete;
	Buffer& operator=(Buffer&&) = delete;
};

