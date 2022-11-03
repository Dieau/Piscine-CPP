
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		void	setName(std::string name);
		Zombie();

	private:
		std::string _name;

};

Zombie *zombieHorde(int NbZombies, std::string name);

#endif