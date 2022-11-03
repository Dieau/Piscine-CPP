#include"../includes/Harl.hpp"

/*enum ErrorLevel{
	OTHER = 0,
	DEBUG = 1,
	INFO = 2,
	WARNING = 3,
	ERROR = 4
};*/

Harl::Harl(void)
{
	this->_messages[0].level = "DEBUG";
	this->_messages[0].fct = &Harl::debug;

	this->_messages[1].level = "INFO";
	this->_messages[1].fct = &Harl::info;

	this->_messages[2].level = "WARNING";
	this->_messages[2].fct = &Harl::warning;

	this->_messages[3].level = "ERROR";
	this->_messages[3].fct = &Harl::error;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\"" << std::endl;
}
void Harl::info(void)
{
	std::cout << "\"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"" << std::endl;
}

void Harl::error(void)
{
	std::cout << "\"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void Harl::some_other_complain(void)
{
	std::cout << "*Some non important complain*" << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->_messages[i].level)
			return (this->*_messages[i].fct)();
	}
	Harl::some_other_complain();
}