#include <iostream>
#include "funcs.h"

int main() {
	int count = 0;
	std::string line;
	int a = 0;	
//	std::cout << addTabs("Hello", 2);
	
	//std::string t = "\t";
	//t += "yasfd";
	//std::cout << t;
		
	while(std::cin) {
		std::getline(std::cin, line);
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




	return 0;
}
