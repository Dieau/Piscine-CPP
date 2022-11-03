#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
    public:

        ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& Cp);
		ClapTrap& operator =(const ClapTrap& Cp);

		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	berepaired(unsigned int amount);
		void	displaystats();
    
    private:

	protected:
	
        std::string _name;
        int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

#endif