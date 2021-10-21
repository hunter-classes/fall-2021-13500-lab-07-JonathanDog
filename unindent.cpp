#include <iostream>
#include "funcs.h"


int main() {
	std::string line;

	while(std::cin) {
		std::getline(std::cin, line);
		std::cout << removeLeadingSpaces(line) << std::endl;	
	}

	return 0;
}
