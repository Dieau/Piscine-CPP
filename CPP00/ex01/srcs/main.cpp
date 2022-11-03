/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:08:56 by alakhdar          #+#    #+#             */
/*   Updated: 2022/07/27 10:08:57 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main(void)
{
	std::string	Command;
	PhoneBook	PhoneBook;
	int			index = 0;

	while (Command != "EXIT" && Command != "exit")
	{
		std::cout << "__Commands__" << std::endl;
		std::cout << "|--ADD--|" << std::endl;
		std::cout << "|-SEARCH-|" << std::endl;
		std::cout << "|--EXIT--|" << std::endl;
		std::getline(std::cin, Command);
		if(std::cin.eof())
			exit(0);
		if (Command == "ADD" || Command == "add")
		{
			if (index > 7)
				std::cout << "Erasing oldest contact in the Book." << std::endl;
			PhoneBook.AddContact(&PhoneBook.Book[index % 8]);
			index++;
			std::cout << std::endl;
		}
		if (Command == "SEARCH" || Command == "search")
		{
			PhoneBook.DisplayAllContacts(8);
			PhoneBook.SearchContact();
		}
	}
	return 0;
}