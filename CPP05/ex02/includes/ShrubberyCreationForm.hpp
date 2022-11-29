/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:48 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:17:48 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm:public Form
{
	public:

		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& Cp);
		ShrubberyCreationForm&	operator =(const ShrubberyCreationForm& Cp);
		~ShrubberyCreationForm();

		virtual void	execute(const Bureaucrat& signat) const;
		const std::string gettarget() const;

	private:

		ShrubberyCreationForm();
		const std::string _target;

};

#endif
