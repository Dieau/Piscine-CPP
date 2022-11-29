/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:44:53 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:44:53 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "An animal type " << this->type << " has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been born from another one!" << std::endl;
}

WrongCat& WrongCat::operator =(const WrongCat& copi)
{
	this->type = copi.type;
	std::cout << "An animal type " << this->type << " has been copied from another one!" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "An animal type " << this->type << " has died!" << std::endl;
	return ;
}

void	WrongCat::MakeSound()
{
	std::cout << "Definetely not a meow! " << std::endl;
}