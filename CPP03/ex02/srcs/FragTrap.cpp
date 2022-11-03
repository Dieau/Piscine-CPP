#include "../includes/FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	this->_attack_damage = 30;
	this->_energy_points = 100;
	this->_hit_points = 100;
	std::cout << this->_name << " upgraded its parts and became a FragTrap!" << std::endl;
	this->displaystats();
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_attack_damage = 30;
	this->_energy_points = 100;
	this->_hit_points = 100;
	std::cout << this->_name << "  upgraded its parts and became a FragTrap!" << std::endl;
	this->displaystats();
}

FragTrap::FragTrap(const FragTrap& Cp)
{
	this->_name = Cp._name;
	this->_energy_points = Cp._energy_points;
	this->_hit_points = Cp._hit_points;
	this->_attack_damage = Cp._attack_damage;
	return ;
}

FragTrap& FragTrap::operator =(const FragTrap& Cp)
{
	this->_name = Cp._name;
	this->_energy_points = Cp._energy_points;
	this->_hit_points = Cp._hit_points;
	this->_attack_damage = Cp._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " has rusted out waiting for its High Five." << std::endl;
	return ;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->_name << " is looking for a friend to High Five." << std::endl;
}