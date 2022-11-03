#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap()
{
	std::cout << this->_name << " enhanced itself into a ScavTrap !" << std::endl;
	this->_attack_damage = 20;
	this->_energy_points = 50;
	this->_hit_points = 100;
	this->displaystats();
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << this->_name << " enhanced itself into a ScavTrap!" << std::endl;
	this->_attack_damage = 20;
	this->_energy_points = 50;
	this->_hit_points = 100;
	this->displaystats();
}

ScavTrap::ScavTrap(const ScavTrap& Cp)
{
	this->_name = Cp._name;
	this->_energy_points = Cp._energy_points;
	this->_hit_points = Cp._hit_points;
	this->_attack_damage = Cp._attack_damage;
	return ;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& Cp)
{
	this->_name = Cp._name;
	this->_energy_points = Cp._energy_points;
	this->_hit_points = Cp._hit_points;
	this->_attack_damage = Cp._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Crap ! " << this->_name <<" just went 'BOOM'." << std::endl;
	return ;
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " is guarding the gate." << std::endl;
}

void	ScavTrap::attack()
{
	std::cout << "ScavTrap " << this->_name << " goes wild, dealing " << this->_attack_damage << " damage!" << std::endl;
}