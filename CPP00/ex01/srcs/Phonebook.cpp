/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:09:02 by alakhdar          #+#    #+#             */
/*   Updated: 2022/07/27 10:09:03 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "PhoneBook initialized." << std::endl;
    return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook destroyed." << std::endl;
    return;
}

std::string Resize_And_Dot(std::string str)
{
    std::string	new_str = str;
	if(str.size() > 10)
	{
		new_str = str.substr(0, 10);
		new_str[9] = '.';
	}
	return (new_str);
}

void	PhoneBook::DisplayAllContacts(int Contacts_Number)
{
	int	i = 0;

	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << " |" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << " Last Name" << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	while (i < Contacts_Number)
	{
		std::cout << "|" << std::setw(10) << i + 1 << ".";
		std::cout << "|" << std::setw(10) << Resize_And_Dot(this->Book[i].GetFirstName());
		std::cout << "|" << std::setw(10) << Resize_And_Dot(this->Book[i].GetLastName());
		std::cout << "|" << std::setw(10) << Resize_And_Dot(this->Book[i].GetNickname()) << "|" << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	PhoneBook::DisplayContact(int Index)
{
	std::string	Command;

	std::cout << "First Name : " << this->Book[Index].GetFirstName() << std::endl;
	std::cout << "Last Name : " << this->Book[Index].GetLastName() << std::endl;
	std::cout << "Nickname : " << this->Book[Index].GetNickname() << std::endl;
	std::cout << "Phone Number : " << this->Book[Index].GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->Book[Index].GetDarkestSecret() << std::endl;
	std::cout << std::endl;
	std::cout << "Enter [y] to continue..." << std::endl;
	std::getline(std::cin, Command);
	while (1)
	{
		if (Command == "y")
		{
			std::cout << std::endl;
			return;
		}
	}

}

void	PhoneBook::AddContact(Contact *Contact)
{
	Contact->SetFirstName();
	Contact->SetLastName();
	Contact->SetNickname();
	Contact->SetPhoneNumber();
	Contact->SetDarkestSecret();
	std::cout << "Contact : " << Contact->GetFirstName() << " added to the PhoneBook." << std::endl;
}

void	PhoneBook::SearchContact(void)
{
	long		i = 0;
	std::string	Command;

	std::cout << "Enter desired Contact's Index, or [n] to return..." << std::endl;
	std::getline(std::cin, Command);
	if (std::cin.eof())
		exit(0);
	if (Command == "n")
	{
		std::cout << std::endl;
		return ;
	}
	i = strtol(Command.data(), NULL, 10);
	if (!(i > 0 && i < 9))
	{
		std::cout << "Contact Index is incorrect, try again." << std::endl;
		PhoneBook::SearchContact();
	}
	else
		this->DisplayContact(i - 1);
}