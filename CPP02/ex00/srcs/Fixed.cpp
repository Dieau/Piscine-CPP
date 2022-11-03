/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:58:37 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/02 15:12:50 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor ✅" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(const Fixed& Cp)
{
	std::cout << "Copy constructor ✅" << std::endl;
	this->_value = Cp.getRawBits();
}

Fixed& Fixed::operator =(const Fixed& Cp)
{
	if (this != &Cp)
	{
		std::cout << "Copy assignment operator ✅" << std::endl;
		this->_value = Cp.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor ✅" << std::endl;
	return ;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function ✅" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function ✅" << std::endl;
	this->_value = raw;
}