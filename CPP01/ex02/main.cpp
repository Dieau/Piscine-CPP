#include <iostream>
#include <ctype.h>
#include <string>

int	main(void){

	std::string		Brain = "HI THIS IS BRAIN";
	std::string		*stringPTR = &Brain;
	std::string&	stringREF = Brain;

	std::cout << "&string = " << &Brain << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "&stringREF = " << &stringREF << std::endl;

    std::cout << std::endl;

	std::cout << "String address -> " << Brain << std::endl;
	std::cout << "StringPTR ------> " << *stringPTR << std::endl;
	std::cout << "StringREF ------> " << stringREF << std::endl;
	return (0);
}