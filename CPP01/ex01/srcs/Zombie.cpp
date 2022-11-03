#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << "Spawning Zombie " << this->_name << "." << std::endl;
	return ;
}

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " has died once more!" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	std::cout << "Spawning Zombie " << this->_name << "." << std::endl;
}