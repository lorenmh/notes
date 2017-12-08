#include <iostream>

int main() {
	std::string name;

	const int pad = 2;

	std::cout << "Input your name: ";
	std::cin >> name;

	std::cout << name.size() << std::endl;

	std::cout << std::string(name.size() + 2 * (pad + 1), '*') << std::endl;
	for (int i = 0; i < (2*pad + 1); i++) {
		if (i == pad) {
			std::cout << '*'
				<< std::string(pad, ' ') << name
				<< std::string(pad, ' ') << '*'
				<< std::endl
			;
			continue;
		}

		std::cout << '*'
			<< std::string(name.size() + 2*pad, ' ') << '*'
			<< std::endl
		;
	}
	std::cout << std::string(name.size() + 2 * (pad + 1), '*') << std::endl;
}
