#include "pch.h"
#include "ciphers.h"

int main (){
	std::string test = "test";
        std::string numTest = "test32";
	for (int i = 0; i < 5; i++) {
		test = convertCaeser(test);
                numTest = convertCaeser(numTest);
		std::cout << "Caeser: "  << test << std::endl;
                std::cout << "Number Caeser: " << numTest << std::endl;
	}
	return 0;
}
