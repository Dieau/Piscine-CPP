#include "../includes/Zombie.hpp"
#include <iostream>

int	main( void )
{
	std::cout << "Spawning 1st Zombie, Bernard." << std::endl;
		Zombie	robert("Bernard");
		robert.announce();

	std::cout << "Spawning 2nd Zombie, Henry, using the newZombie function."
		<< std::endl;
		Zombie	*georges = newZombie("Henry");
		georges->announce();
		delete georges;

	std::cout << "Spawning 3rd Zombie, Lévy, using the randomChump function."
		<< std::endl;
		randomChump("Lévy");
}
