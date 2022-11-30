/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:02:51 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/29 11:02:51 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> numbers(10);
    for (int i = 0; i < 10; i++)
	{
        numbers[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
        std::cout << numbers[i] << std::endl;
	}

    {
        Array<int> tmp = numbers;
        numbers[5] = 43;
        Array<int> test(tmp);
        for (int i = 0; i < 10; i++)
        {
            std::cout << tmp[i] << std::endl;
        }
    }

    try
    {
        numbers[20] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------" << std::endl;
    return 0;
}
