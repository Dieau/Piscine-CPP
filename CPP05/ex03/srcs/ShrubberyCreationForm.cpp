/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:20:35 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:20:35 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("Shrubbery Creation Form", 145, 137)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):Form("Shrubbery Creation Form", 145, 137), _target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& Cp):Form(Cp.getName(), Cp.get_to_sign(), Cp.get_to_exec()), _target(Cp.gettarget())
{

}

ShrubberyCreationForm& ShrubberyCreationForm:: operator = (const ShrubberyCreationForm& Cp)
{
	(void) Cp;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

const std::string	ShrubberyCreationForm::gettarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& signat) const
{
	Form::execute(signat);
	std::ofstream outfile;
	outfile.open(this->_target + "_shrubbery");
	if (outfile.is_open())
	{
		outfile << std::endl;
		outfile << "        /\\" << std::endl;
		outfile << "       /__\\" << std::endl;
		outfile << "      /____\\" << std::endl;
		outfile << "     /______\\" << std::endl;
		outfile << "    /________\\" << std::endl;
		outfile << "   /__________\\" << std::endl;
		outfile << "        ||" << std::endl;
		outfile << "        WW" << std::endl;
		outfile << std::endl;
		std::cout << "ASCII tree planted by " << signat.getName() << std::endl;
	}
else
	{
		std::cout << "Shrubbery tree couldn't be created by " << signat.getName() << " because the target file couldn't be opened."<< std::endl;
	}
}
