#include <iostream>
#include <RaftEngineCore/Utils/test.hpp>

int main() {
	std::cout << "Hello from Raft Engine Editor" << std::endl;

	RaftEngine::checkGLFW();

	std::cin.get();
}