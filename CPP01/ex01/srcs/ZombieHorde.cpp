#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int NbZombies, std::string name)
{
	Zombie *Horde = new Zombie[NbZombies];
	for (int i = 0; i < NbZombies; i++)
	{
		Horde[i].setName(name);
	}
	return (Horde);
}