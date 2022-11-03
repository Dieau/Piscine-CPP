#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ): name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is dead... For good this time!" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
