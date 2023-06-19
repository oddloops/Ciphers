#include "pch.h"
#include "caeser.h"

int main (){
	std::string test = "test";
	for (int i = 0; i < 5; i++) {
		test = convertCaeser(test);
		std::cout << test << std::endl;
	}
	return 0;
}
