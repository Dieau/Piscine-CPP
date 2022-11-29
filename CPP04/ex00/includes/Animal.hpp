/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:18:51 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 09:18:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>
#include<string>

class Animal
{
	public:

		Animal();
		Animal(const Animal& Cp);
		Animal& operator =(const Animal& Cp);

		~Animal();

		virtual void	MakeSound() const;
		std::string	const& getType() const;
		
	private:

	protected:
		std::string type;
};

#endif