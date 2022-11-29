/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:45 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:45 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:

		Brain();
		Brain(const Brain& Cp);
		Brain&	operator =(const Brain& Cp);

		~Brain();

	private:

		std::string	ideas[100];

	protected:

};

#endif