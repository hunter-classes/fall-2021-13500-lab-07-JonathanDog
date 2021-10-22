#include <iostream>
#include <cctype>


std::string removeLeadingSpaces(std::string line);

int main() {
	std::string line;

	while(std::cin) {
		std::getline(std::cin, line);
		std::cout << removeLeadingSpaces(line) << std::endl;	
	}

	return 0;
}


std::string removeLeadingSpaces(std::string line) {
    bool foundNonSpace = false;
    std::string result = "";
    for(int i = 0; i<line.length(); i++) {
        if(!isspace(line[i]) && !foundNonSpace) {
            foundNonSpace = true;
        }

        if(foundNonSpace) {
            result += line[i];

        }

    }
    return result;
}
