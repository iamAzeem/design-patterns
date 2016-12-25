// Singleton Pattern - On Heap

#include <iostream>
#include <memory>

namespace DP {

class Singleton
{
public:
	static Singleton* getInstance()
	{
		static std::unique_ptr<Singleton> instance { new Singleton() };
		return instance.get();
	}
	
	~Singleton()
	{
		std::cout << "Singleton destroyed from stack!" << std::endl;
	}
	
	void hello()
	{
		std::cout << "Hello from Singleton!" << std::endl;
	}
	
private:
	explicit Singleton()
	{
		std::cout << "Singleton created on stack!" << std::endl;
	}
};

} // DP

int main() 
{
	using namespace DP;
	
	auto obj = Singleton::getInstance();
	obj->hello();
	
	return 0;
}
