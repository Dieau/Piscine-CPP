/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:11:31 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 15:11:31 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->_forms[0] = "presidential pardon";
	this->_forms[1] = "robotomy request";
	this->_forms[2] = "shrubbery creation";
	pos = 0;
	// for (int i = 0; i < 1000; i++)
	// {
		// this->_to_del[i] = NULL;
	// }
}

Intern::Intern(const Intern& Cp)
{
	for (int i = 0; i < 3; i++)
	{
		this->_forms[i] = Cp._forms[i];
	}
	pos = 0;
	// for (int i = 0; i < 1000; i++)
	// {
		// this->_to_del[i] = NULL;
	// }
}

Intern& Intern::operator =(const Intern& Cp)
{
	for (int i = 0; i < 3; i++)
	{
		this->_forms[i] = Cp._forms[i];
	}
	return (*this);
}

Intern::~Intern()
{
	/*for (int i = 0; i < 1000; i++)
	{
		delete (this->_to_del[i]);
	}*/
}

Form*	Intern::makeForm(const std::string& name, const std::string& target)
{
	int i = 0;
	Form* ret = NULL;
	/*if (this->_to_del[999])
	{
		std::cout << "Intern is burned out, he needs to rest.";
		return (NULL);
	}*/
	while(i < 3 && name.compare(this->_forms[i]))
	{
		i++;
	}
	switch (i)
	{
		case 0:
			ret = new PresidentialPardonForm(target);
			// this->_to_del[pos] = ret;
			pos++;
			return (ret);
			break;
		case 1:
			ret = new RobotomyRequestForm(target);
			// this->_to_del[pos] = ret;
			pos++;
			return (ret);
			break;
		case 2:
			ret = new ShrubberyCreationForm(target);
			// this->_to_del[pos] = ret;
			pos++;
			return (ret);
			break;
	default:
		std::cout << "Intern could not find this form!" << std::endl;
		return (NULL);
		break;
	}
}
