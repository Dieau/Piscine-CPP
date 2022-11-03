/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:08:20 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/03 10:08:20 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main()
{
	std::string s1("Victor");
	std::string s2("Cafe");
	ClapTrap Victor(s1);
	ClapTrap Cafe(s2);

	Victor.attack(s2);
	Cafe.takeDamage(0);
	Cafe.berepaired(10);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.berepaired(1);
	Cafe.displaystats();
	Cafe.attack(s1);
	Victor.displaystats();
	Victor.takeDamage(10);
	Victor.attack(s2);
	Victor.takeDamage(1);
	Victor.berepaired(1);
}