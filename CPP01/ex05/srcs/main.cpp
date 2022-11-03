#include "Harl.hpp"

int main()
{
	Harl Harl;

	std::cout << "DEBUG level :" << std::endl;
	Harl.complain("DEBUG");
	std::cout << "INFO level :" << std::endl;
	Harl.complain("INFO");
	std::cout << "WARNING level :" << std::endl;
	Harl.complain("WARNING");
	std::cout << "ERROR level :" << std::endl;
	Harl.complain("ERROR");
	std::cout << "Random string :" << std::endl;
	Harl.complain("wefowhefiuwhr");
	std::cout << "Empty string :" << std::endl;
	Harl.complain("");
}