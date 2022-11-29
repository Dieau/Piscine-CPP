/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:44:05 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:44:06 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Brain.hpp"

Animal::Animal():type("Random Animal")
{
	std::cout << "Beep boop. New lifeform detected. Undefined species. Beep." << std::endl;
	return;
}

Animal::Animal(const Animal& Cp)
{
	std::cout << "Boop Beep. An animal has evolved from an existing species." << std::endl;
	this->type = Cp.type;
}

Animal& Animal::operator =(const Animal& Cp)
{
	std::cout << "Beep Beep. An animal species has been cloned." << std::endl;
	this->type = Cp.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "An undefined species has met its creator." << std::endl;
}

void	Animal::MakeSound()
{
	std::cout << "Random animal sounds!" << std::endl;
}