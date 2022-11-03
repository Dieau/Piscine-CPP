#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	
        ScavTrap();
	    ScavTrap(std::string name);
	    ScavTrap(const ScavTrap& Cp);
	    ScavTrap& operator =(const ScavTrap& Cp);

	    ~ScavTrap();

    	void	attack();
    	void	guardGate();

	private:
};

#endif