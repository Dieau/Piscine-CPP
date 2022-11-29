/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:06:00 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 15:06:00 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
	
		Intern();
		Intern(const Intern& Cp);
		~Intern();

		Intern& operator =(const Intern& Cp);
		Form*	makeForm(const std::string& name, const std::string& target);

	private:

		std::string	_forms[3];
		int pos;
		// Form*	_to_del[1000];
};

#endif