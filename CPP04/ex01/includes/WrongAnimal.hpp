/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:55 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:56 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include<iostream>
#include<string>

class WrongAnimal
{
	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& Cp);
		WrongAnimal& operator =(const WrongAnimal& Cp);

		virtual ~WrongAnimal();
        
		void MakeSound();
		
	private:

	protected:
		std::string type;
		
};

#endif