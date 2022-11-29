/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:11:37 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/24 11:11:37 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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
		
		int const&	getGrade() const;
		std::string	const& getName() const;
		void	promote();
		void	demote();

	private:

		std::string const _name;
		int	_grade;
};

std::ostream& operator <<(std::ostream& out, const Bureaucrat& nb);

#endif