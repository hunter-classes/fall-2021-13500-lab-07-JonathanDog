#include <iostream>
#include <cctype>


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

int countChar(std::string line, char c) {
	int count = 0;
	for(int i = 0; i < line.length(); i++) {
		if(line[i] == c) {
			count++;
		}
	}
	return count;
}




