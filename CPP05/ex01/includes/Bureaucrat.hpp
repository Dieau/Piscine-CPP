/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:11:03 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/24 14:13:49 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class	Form;

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& Cp);
		~Bureaucrat();

		Bureaucrat& operator =(const Bureaucrat& Cp);
		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
		
		std::string	const& getName() const;
		int const&	getGrade() const;
		void	promote();
		void	demote();
		void	signForm(Form& toSign) const;

	private:

		std::string const _name;
		int	_grade;
};

std::ostream& operator <<(std::ostream& out, const Bureaucrat& nb);

#endif