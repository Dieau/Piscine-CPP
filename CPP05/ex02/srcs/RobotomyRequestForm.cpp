/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:20:18 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:20:18 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("Robotomy Request Form", 72, 45)
{
	std::srand((unsigned)time(0));
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target):Form("Robotomy Request Form", 72, 45), _target(target)
{
	std::srand((unsigned)time(0));
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Cp):Form(Cp.getName(), Cp.get_to_sign(), Cp.get_to_exec()), _target(Cp.gettarget())
{
	std::srand((unsigned)time(0));
}

RobotomyRequestForm& RobotomyRequestForm:: operator = (const RobotomyRequestForm& Cp)
{
	//nonsense attributes are const
	(void) Cp;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

const std::string	RobotomyRequestForm::gettarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(const Bureaucrat& signat) const
{
	Form::execute(signat);
	std::cout << "BZZZZZZZZZZ BRRRRRRRRRRR BZZZZZZ " << std::endl;
	if (std::rand() % 2 == 0)
	{
		std::cout << this->_target << " has been robotomized by " << signat.getName() << std::endl;
	}
	else
	{
		std::cout << "The robotomy has failed on target: " << this->_target << "!" << std::endl;
	}
}