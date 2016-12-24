/* 
 * Singleton Pattern - On Stack
 *
 * Reference is used to call the member functions
 * Acquiring a reference will result in calling dtors
 *
 */

#include <iostream>
using namespace std;
 
namespace DP {
 
class Singleton
{
public:
	static Singleton& getInstance()
	{
		static Singleton instance;
		return instance;
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
 
    // Getting reference from this will result in calling dtors multiple times
    // auto obj = Singleton::getInstance();
    // obj.hello();
    
    // Calling member function directly
	Singleton::getInstance().hello();
 
	return 0;
}
