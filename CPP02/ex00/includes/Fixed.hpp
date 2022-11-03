/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:58:42 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/02 15:12:24 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed& Cp);
		int getRawBits() const;
		void setRawBits(int const raw);
		Fixed& operator =(const Fixed& Cp);

	private:

		int	_value;
		static const int _nbit = 8;
};

#endif