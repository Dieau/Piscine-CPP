/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:44:37 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:44:38 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat():Animal()
{
	this->type = "Cat";
	std::cout << "Beep . What is this purring... Beeep! A " << this->type << " is rubbing my leg!" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& Cp)
{
	this->type = Cp.type;
	std::cout << "Beeeeep. Seems like a mama " << this->type << " just made a kitten!" << std::endl;
	this->_brain = new Brain();
}

Cat& Cat::operator =(const Cat& Cp)
{
	this->type = Cp.type;
	*this->_brain = *Cp._brain;
	std::cout << "Boop Boop. I just created a " << this->type << " by cloning another one!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Booooop... a poor " << this->type << " has purred one last time...!" << std::endl;
	delete(this->_brain);
	return ;
}

void	Cat::MakeSound()
{
	std::cout << "Prrrrrr... Meow?" << std::endl;
}

Brain* Cat::GetBrain()
{
	return((this->_brain));
}