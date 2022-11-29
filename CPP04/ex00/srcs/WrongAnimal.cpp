/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:20:17 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 10:20:18 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("random WrongAnimal")
{
	std::cout << "A new random WrongAnimal is born!" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& Cp)
{
	std::cout << "A new WrongAnimal is born form another one!" << std::endl;
	this->type = Cp.type;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& Cp)
{
	std::cout << "A WrongAnimal type has been copied!" << std::endl;
	this->type = Cp.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A random WrongAnimal is dead!" << std::endl;
}

void	WrongAnimal::MakeSound()
{
	std::cout << "Random WrongAnimal sounds!" << std::endl;
}