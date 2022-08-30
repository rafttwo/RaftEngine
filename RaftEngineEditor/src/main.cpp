#include <iostream>
#include <RaftEngineCore/Utils/test.hpp>

int main() {
	std::cout << "Hello from Raft Engine Editor" << std::endl;

	RaftEngine::sayHello();

	std::cin.get();
}