/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:08:52 by alakhdar          #+#    #+#             */
/*   Updated: 2022/07/27 10:08:53 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Contact.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	std::cout << "Contact " << Contact::Nickname << " erased." << std::endl;
	return;
}

void    Contact::SetFirstName(void)
{
    std::cout << "Please enter Contact's First Name :" << std::endl;
    std::getline(std::cin, Contact::FirstName);
    if (Contact::FirstName == "")
    {
        std::cout << "First Name cannot be empty!" << std::endl;
        Contact::SetFirstName();
    }
    return;
}

void    Contact::SetLastName(void)
{
    std::cout << "Please enter Contact's Last Name :" << std::endl;
    std::getline(std::cin, Contact::LastName);
    if (Contact::LastName == "")
    {
        std::cout << "Last Name cannot be empty!" << std::endl;
        Contact::SetLastName();
    }
    return;
}

void    Contact::SetNickname(void)
{
    std::cout << "Please enter Contact's Nickname :" << std::endl;
    std::getline(std::cin, Contact::Nickname);
    if (Contact::Nickname == "")
    {
        std::cout << "Nickname cannot be empty!" << std::endl;
        Contact::SetNickname();
    }
    return;
}

void    Contact::SetPhoneNumber(void)
{
    std::cout << "Please enter Contact's Phone Number :" << std::endl;
    std::getline(std::cin, Contact::PhoneNumber);
    if (Contact::PhoneNumber == "")
    {
        std::cout << "Phone Number cannot be empty!" << std::endl;
        Contact::SetPhoneNumber();
    }
    return;
}

void    Contact::SetDarkestSecret(void)
{
    std::cout << "Please enter Contact's Darkest Secret :" << std::endl;
    std::getline(std::cin, Contact::DarkestSecret);
    if (Contact::DarkestSecret == "")
    {
        std::cout << "Darkest Secret cannot be empty!" << std::endl;
        Contact::SetDarkestSecret();
    }
    return;
}

std::string	Contact::GetFirstName(void)
{
	return (this->FirstName);
}

std::string	Contact::GetLastName(void)
{
	return (this->LastName);
}

std::string	Contact::GetNickname(void)
{
	return (this->Nickname);
}

std::string	Contact::GetPhoneNumber(void)
{
	return (this->PhoneNumber);
}

std::string	Contact::GetDarkestSecret(void)
{
	return (this->DarkestSecret);
}