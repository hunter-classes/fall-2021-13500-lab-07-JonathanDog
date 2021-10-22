#include <iostream>
#include <cctype>
#include <fstream>

std::string removeLeadingSpaces(std::string line);

int main() {
	std::string line;
	std::ifstream file("bad-code.cpp");
    if(file.fail()) {
		std::cerr<<"Error reading file\n";
		exit(1);
	}

	while(std::getline(file, line)) {
		std::cout << removeLeadingSpaces(line) << std::endl;	
	}
	
	file.close();
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
