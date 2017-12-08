#include <iostream>

int main() {
	// concat test
	std::string a("Hello");

	// left associativity test
	std::string output1 = a + " World" + "!";

	// right associativity test
	// std::string output2 = "World" + ", " + a;
	// does NOT work, because + is `left associative`

	std::cout << output1 << std::endl;
	//std::cout << output2 << std::endl;
}
