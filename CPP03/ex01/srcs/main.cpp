#include "../includes/ScavTrap.hpp"

int main()
{
	std::string s1("Cafe");
	std::string s2("Victor");
	ClapTrap Cafe(s1);
	ScavTrap Victor(s2);

	Cafe.attack(s2);
	Victor.takeDamage(0);
	Victor.berepaired(10);
	Victor.berepaired(1);
	Victor.berepaired(1);
	Victor.attack();
	Cafe.takeDamage(20);
	Cafe.attack(s2);
	Cafe.takeDamage(1);
	Cafe.berepaired(1);
	Cafe.displaystats();
	Victor.displaystats();
	Victor.guardGate();
}