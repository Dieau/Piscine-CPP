/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:09:23 by alakhdar          #+#    #+#             */
/*   Updated: 2022/07/27 10:09:25 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include "Contact.hpp"
# include <cstdlib>
# include <iomanip>

class PhoneBook
{
private:
public:
	PhoneBook(void);
	~PhoneBook();

	Contact	Book[8];
	void	DisplayAllContacts(int ContactNbr);
	void	DisplayContact(int Index);
	void	AddContact(Contact *Cont);
	void	SearchContact(void);

};

#endif