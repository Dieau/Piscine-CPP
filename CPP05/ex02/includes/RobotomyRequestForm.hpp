/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:36 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:17:36 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm:public Form
{
	public:

		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& Cp);
		RobotomyRequestForm&	operator =(const RobotomyRequestForm& Cp);
		~RobotomyRequestForm();

		virtual void	execute(const Bureaucrat& signat) const;
		const std::string gettarget() const;

	private:

		RobotomyRequestForm();
		const std::string _target;

};

#endif