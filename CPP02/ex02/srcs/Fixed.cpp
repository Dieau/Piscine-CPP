/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:32 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/02 15:48:29 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor ✅" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor ✅" << std::endl;
	this->_value = nb * ((1 << _nbit));
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor ✅" << std::endl;
	this->_value = roundf(nb * (1 << this->_nbit));
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
	return((float)this->_value / (1 <<this->_nbit));
}

Fixed Fixed::operator+ (Fixed const &Cp) const
{
	return (Fixed(this->toFloat() + Cp.toFloat()));

}

Fixed Fixed::operator- (Fixed const &Cp) const
{
	return (Fixed(this->toFloat() - Cp.toFloat()));

}

Fixed Fixed::operator* (Fixed const &Cp) const
{
	return (Fixed(this->toFloat() * Cp.toFloat()));
}

Fixed Fixed::operator/ (Fixed const &Cp) const
{
	return (Fixed(this->toFloat() / Cp.toFloat()));

}

bool Fixed::operator== (const Fixed &val) const
{
	return (this->getRawBits() == val.getRawBits() ? true : false);
}

bool Fixed::operator!= (const Fixed &val) const
{
	return (this->getRawBits() != val.getRawBits() ? true : false);
}

bool Fixed::operator> (const Fixed &val) const
{
	return (this->getRawBits() > val.getRawBits() ? true : false);
}

bool Fixed::operator>= (const Fixed &val) const
{
	return (this->getRawBits() >= val.getRawBits() ? true : false);
}

bool Fixed::operator< (const Fixed &val) const
{
	return (this->getRawBits() < val.getRawBits() ? true : false);
}

bool Fixed::operator<= (const Fixed &val) const
{
	return (this->getRawBits() < val.getRawBits() ? true : false);
}

Fixed &Fixed::operator++()
{
	this->_value ++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed &Fixed::operator--()
{
	this->_value --;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

const Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

const Fixed &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

const Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}

const Fixed &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs < rhs ? lhs : rhs);
}