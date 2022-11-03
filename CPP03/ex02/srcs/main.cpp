#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	std::string s1("Victor");
	std::string s2("Cafe");
	ClapTrap Victor(s1);
	ScavTrap Cafe(s2);
	FragTrap Tac("Tachycardie");

	Victor.attack(s2);
	Cafe.takeDamage(0);
	Cafe.berepaired(10);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.attack();
	Victor.takeDamage(20);
	Tac.takeDamage(20);
	Victor.attack(s2);
	Victor.takeDamage(1);
	Victor.berepaired(1);
	Victor.displaystats();
	Cafe.displaystats();
	Tac.displaystats();
	Tac.highFivesGuys();
	Cafe.guardGate();
}