/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:19 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 13:17:19 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm:public Form
{
	public:

		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& Cp);
		PresidentialPardonForm&	operator =(const PresidentialPardonForm& Cp);
		~PresidentialPardonForm();

		virtual void	execute(const Bureaucrat& signat) const;
		const std::string gettarget() const;

	private:

		PresidentialPardonForm();
		const std::string _target;

};

#endif