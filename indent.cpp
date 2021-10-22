#include <iostream>
#include <fstream>

int countChar(std::string line, char c);

int main() {
	int count = 0;
	std::string line;
	int a = 0;	
	
	std::ifstream file("bad-code2.cpp");
	while(std::getline(file, line)) {
		if(countChar(line, '}') == 1 ) {
			a = count - 1;
		} else {
		 	a = count;
		}
	
		for(int i = 0; i<a; i++) {
			line = "\t" + line;
		}
		std::cout << line << std::endl;

		count += countChar(line, '{');
		count -= countChar(line, '}');

	}	
	file.close();



	return 0;
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

