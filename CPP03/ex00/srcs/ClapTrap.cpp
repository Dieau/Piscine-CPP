/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:08:14 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/03 10:08:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

class ClapTrap;

ClapTrap::ClapTrap(void): _name("default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called ✅" << std::endl;
	this->displaystats();
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created ✅" << std::endl;
	this->displaystats();
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& Cp): _name(Cp._name), _hit_points(Cp._hit_points), _energy_points(Cp._energy_points), _attack_damage(Cp._attack_damage)
{

}

ClapTrap& ClapTrap::operator =(const ClapTrap& Cp)
{
	this->_name = Cp._name;
	this->_energy_points = Cp._energy_points;
	this->_hit_points = Cp._hit_points;
	this->_attack_damage = Cp._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destroyed ✅" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points > 0)
	{
		if (this->_energy_points > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attacks " << target
				<< ", inflicting " << this->_attack_damage << " damage."
				<< std::endl;
			this->_energy_points--;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " is too tired to attack!"
				<< std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is all out of health points!"
			<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	this->_hit_points -= amount;
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " received " << amount << " damage and died!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " received " << amount << " damage!" << std::endl;
	}
}

void	ClapTrap::berepaired(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		if (this->_energy_points > 0)
		{
			std::cout << "ClapTrap " << this->_name << " repaired itself for " << amount << " hit points!" << std::endl;
			this->_energy_points--;
			this->_hit_points += amount;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " is too exhausted to repair itself." << std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is dead and can't be repaired!" << std::endl;
	}
}

void	ClapTrap::displaystats()
{
	std::cout << "Beep Boop, I am " << this->_name << ", i have " << this->_hit_points << " hp, " << this->_energy_points << " ep and " << this->_attack_damage << " attack! Beep Beep Boop." << std::endl;
}