/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:16:15 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/14 13:16:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		data;
	Data		*ptr;
    uintptr_t	raw;

	data.str = "Hello World!";
    data.n = 42;
	data.b = true;

	raw = serialize(&data);
	ptr = deserialize(raw);

	std::cout
        << std::endl
		<< "Data: {" << std::endl
		<< "    string = " << data.str << "," << std::endl
		<< "    number = " << data.n << "," << std::endl
        << "    bool = " << data.b << "," << std::endl
		<< "};" << std::endl;

    std::cout << std::endl << "================================================" << std::endl << std::endl;

	std::cout
		<< std::endl
		<< "&Data = " << &data << std::endl
		<< "unintptr = serialize(&Data) = " << raw << std::endl
		<< "ptr = deserialize(uintptr) = " << ptr << std::endl
        << std::endl;

    std::cout << std::endl << "================================================" << std::endl << std::endl;

	std::cout
		<< "Data: {" << std::endl
		<< "    string = " << data.str << "," << std::endl
		<< "    number = " << data.n << "," << std::endl
        << "    bool = " << data.b << "," << std::endl
		<< "};" << std::endl;

	return (0);
}