/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:52 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:52 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat paul("Paul", 1);
	Bureaucrat Etienne("Etienne", 150);
	Bureaucrat Test("Test", 150);

	ShrubberyCreationForm shrub("plain");
	RobotomyRequestForm robot("Etienne");
	PresidentialPardonForm zaph("Didier");
	PresidentialPardonForm testpres("Test");

	try
	{
		Etienne.signForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Etienne.signForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Etienne.signForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		paul.signForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		paul.signForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		paul.signForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Etienne.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()  << " I can't execute this form!" << std::endl;
	}
	try
	{
		Etienne.executeForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()  << " I can't execute this form!" << std::endl;
	}
	try
	{
		Etienne.executeForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()  << " I can't execute this form!" << std::endl;
	}

	try
	{
		paul.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 4; i++)
	{
		try
		{
			paul.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	try
	{
		paul.executeForm(zaph);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Test.executeForm(testpres);
	}
		catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}