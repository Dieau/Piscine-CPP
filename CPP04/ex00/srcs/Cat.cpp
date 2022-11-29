/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:20:01 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 10:02:42 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat():Animal()
{
	this->type = "Cat";
	std::cout << "Beep. What is this purring... Beeep! A " << this->type << " is rubbing my leg!" << std::endl;
}

Cat::Cat(const Cat& Cp)
{
	this->type = Cp.type;
	std::cout << "Beeeeep. Seems like a mama " << this->type << " just made a kitten!" << std::endl;
}

Cat& Cat::operator =(const Cat& Cp)
{
	this->type = Cp.type;
	std::cout << "Boop Boop. I just created a " << this->type << " by cloning another one!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Booooop... a poor " << this->type << " has purred one last time...!" << std::endl;
	return ;
}

void	Cat::MakeSound() const
{
	std::cout << "Prrrrrr... Meow?" << std::endl;
}
