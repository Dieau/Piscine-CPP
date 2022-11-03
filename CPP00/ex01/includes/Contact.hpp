/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:09:12 by alakhdar          #+#    #+#             */
/*   Updated: 2022/07/27 10:09:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
    std::string	PhoneNumber;
	std::string	DarkestSecret;
	
public:
	Contact(void);
	~Contact(void);
	
	void		SetFirstName(void);
	void		SetLastName(void);
	void		SetNickname(void);
    void		SetPhoneNumber(void);
	void		SetDarkestSecret(void);

	std::string	GetFirstName(void);
    std::string	GetLastName(void);
    std::string	GetNickname(void);
    std::string	GetPhoneNumber(void);
	std::string	GetDarkestSecret(void);
};

#endif