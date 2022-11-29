/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:11 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:12 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"

int main()
{
	int size = 4;
	Animal *test[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			test[i] = new Cat();
		else
			test[i] = new Dog();
	}
	Cat test1;
	Cat test2;
	test1 = test2;
	Cat test3 = test2;
	std::cout << test1.GetBrain() << std::endl;
	std::cout << test2.GetBrain() << std::endl;
	std::cout << test3.GetBrain() << std::endl;
	for (int i = 0; i < size; i++)
	{
		test[i]->MakeSound();
        delete test[i];
	}
}