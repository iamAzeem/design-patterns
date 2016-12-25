// Singleton Pattern - On Stack
// Returning a pointer of static object

#include <iostream>

namespace DP {

class Singleton
{
public:
	static Singleton* getInstance()
	{
		static Singleton instance;
		return &instance;
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
