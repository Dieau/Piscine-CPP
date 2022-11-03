#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->_type = name;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string&	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string name)
{
	this->_type = name;
}