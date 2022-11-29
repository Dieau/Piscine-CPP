/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:19:13 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 10:19:30 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(const WrongCat& Cp);
		WrongCat& operator =(const WrongCat& Cp);

		~WrongCat();

		void MakeSound();

	private:

	protected:
		
};

#endif