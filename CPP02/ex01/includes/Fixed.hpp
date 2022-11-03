/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:58:21 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/02 15:20:04 by alakhdar         ###   ########lyon.fr   */
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
		Fixed(const int t);
		Fixed(const float t);
		~Fixed();
		Fixed(const Fixed& Cp);
		float toFloat(void) const;
		int	toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const raw);
		Fixed& operator =(const Fixed& Cp);

	private:

		int	_value;
		static const int _nbit = 8;
};

std::ostream& operator <<(std::ostream& out, const Fixed& nb);

#endif