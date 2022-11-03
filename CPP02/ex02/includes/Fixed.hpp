/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:57:43 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/02 14:06:52 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <math.h>

class Fixed
{
	public:

		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();
		Fixed(const Fixed& Cp);
		Fixed& operator =(const Fixed& Cp);
		
		Fixed &operator++();//prefix increment
		Fixed operator++(int);//postfix increment
		Fixed &operator--();//prefix decrement
		Fixed operator--(int);//postfix decrement
		
		float toFloat(void) const;
		int	toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const raw);
		
		bool operator==(const Fixed &val) const;
		bool operator!=(const Fixed &val) const;
		bool operator>(const Fixed &val) const;
		bool operator<(const Fixed &val) const;
		bool operator>=(const Fixed &val) const;
		bool operator<=(const Fixed &val) const;

		Fixed operator+(Fixed const &Cp) const;
		Fixed operator-(Fixed const &Cp) const;
		Fixed operator*(Fixed const &Cp) const;
		Fixed operator/(Fixed const &Cp) const;

		static const Fixed &min(Fixed &lhs, Fixed &rhs);
		static const Fixed &min(Fixed const &lhs, Fixed const &rhs);
		static const Fixed &max(Fixed &lhs, Fixed &rhs);
		static const Fixed &max(Fixed const &lhs, Fixed const &rhs);

	private:

		int	_value;
		static const int _nbit = 8;
};

std::ostream& operator <<(std::ostream& out, const Fixed& nb);

#endif