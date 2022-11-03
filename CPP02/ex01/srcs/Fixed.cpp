/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:58:11 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/02 15:25:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor ✅" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(const int t)
{
	std::cout << "Int constructor ✅" << std::endl;
	this->_value = t << this->_nbit;
}

Fixed::Fixed(const float t)
{
	std::cout << "Float constructor ✅" << std::endl;
	this->_value = roundf(t * ((1 << _nbit)));
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

std::ostream& operator <<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor ✅" << std::endl;
	return ;
}

int Fixed::getRawBits() const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return(this->_value >> this->_nbit);
}

float Fixed::toFloat(void) const
{
	return((float)this->_value) / (1 <<this->_nbit);
}