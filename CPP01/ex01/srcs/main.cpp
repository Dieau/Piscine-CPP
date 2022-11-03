#include "../includes/Zombie.hpp"

int main(int argc, char	**argv)
{
	std::string	Name;
	int NbZombies = 8;

	std::cout << "Enter your dumb Zombie name :" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, Name);
	if(std::cin.eof())
		exit(0);
	Zombie *Horde = zombieHorde(NbZombies, Name);
	for (int i = 0; i < NbZombies; i++)
		Horde[i].announce();
	delete[] (Horde);
	return 0;
}