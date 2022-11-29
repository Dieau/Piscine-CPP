/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:20:05 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:20:05 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("Presidential Pardon Form", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):Form("Presidential Pardon Form", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& Cp):Form(Cp.getName(), Cp.get_to_sign(), Cp.get_to_exec()), _target(Cp.gettarget())
{

}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& Cp)
{
	(void) Cp;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

const std::string	PresidentialPardonForm::gettarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(const Bureaucrat& signat) const
{
	Form::execute(signat);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}