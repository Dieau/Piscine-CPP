/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:41 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:41 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	public:

		Animal();
		Animal(const Animal& Cp);
		virtual Animal& operator =(const Animal& Cp);

		virtual ~Animal();

		virtual void MakeSound();
		
	private:

	protected:

		std::string type;
};

#endif