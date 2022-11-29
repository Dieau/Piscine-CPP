/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:11:41 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 15:11:41 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern stagiaire;
	Form* test[3];
	Bureaucrat Etienne("Etienne", 1);
	test[0] = stagiaire.makeForm("shrubbery creation", "plain");
	test[1] = stagiaire.makeForm("presidential pardon", "Didier");
	test[2] = stagiaire.makeForm("robotomy request", "Bender");
	for (int i = 0; i < 3; i++)
	{
		Etienne.signForm(*test[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		Etienne.executeForm(*test[i]);
	}
	Form* nul = stagiaire.makeForm("false", "Etienne");

	for (int i = 0; i < 1000; i++)
	{
		nul = stagiaire.makeForm("robotomy request", "Bender");
		delete nul;
	}
	delete[] *test;
	std::cout << nul << std::endl;
}