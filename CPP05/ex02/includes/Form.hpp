/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:05 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:17:05 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

		Form(std::string name, int gradesign, int gradexec);
		Form(const Form& Cp);
		Form& operator =(const Form& Cp);
		virtual ~Form() = 0;

		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};

		class IsNotSignedException: public std::exception{
			public:
				const char* what() const throw();
		};

		const std::string getName() const;
		bool	getsigned() const;
		int		get_to_sign() const;
		int		get_to_exec() const;
		void	beSigned(const Bureaucrat& signat);

		virtual void	execute(const Bureaucrat& signat) const;

	private:

		Form();
		const std::string _name;
		const int	_to_exec;
		const int	_to_sign;
		bool _signed;

};

std::ostream& operator <<(std::ostream& out, const Form& nb);

#endif