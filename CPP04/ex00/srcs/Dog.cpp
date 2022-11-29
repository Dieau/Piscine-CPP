/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:20:06 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 10:02:47 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog():Animal()
{
	this->type = "Doggo";
	std::cout << "Beep. A nice " << this->type << " is running towards me!" << std::endl;
}

Dog::Dog(const Dog& Cp)
{
	this->type = Cp.type;
	std::cout << "Boop. Momma " << this->type << " just made a puppy!" << std::endl;
}

Dog& Dog::operator =(const Dog& Cp)
{
	this->type = Cp.type;
	std::cout << "Beep. I just cloned a " << this->type << " from another one! Boop." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Beep... A poor little " << this->type << " just fetched its last bone...!" << std::endl;
	return ;
}

void	Dog::MakeSound() const
{
	std::cout << "Rrrrrr bark bark BARK! Awoooooo!" << std::endl;
}