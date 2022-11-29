/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:58 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:59 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "../includes/WrongAnimal.hpp"

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