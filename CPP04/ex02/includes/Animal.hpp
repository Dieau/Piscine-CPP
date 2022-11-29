/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:43:38 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:43:38 by alakhdar         ###   ########lyon.fr   */
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
		Animal(const Animal& copi);
		virtual Animal& operator =(const Animal& copi);

		virtual ~Animal();

		virtual void MakeSound();
		
	private:

	protected:
		std::string type;
};

#endif