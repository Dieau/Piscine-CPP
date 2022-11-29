/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:20:11 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/08 09:19:52 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main ()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal max;
	Dog	theo;
	Cat	anas;
    WrongAnimal totor;
    WrongCat    rob;
    Cat dedel = anas;
    Dog toby;
    toby = Dog();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->MakeSound(); //will output the cat sound!
    j->MakeSound();
    meta->MakeSound();

    max.MakeSound();
	theo.MakeSound();
	anas.MakeSound();
    totor.MakeSound();
    rob.MakeSound();
    dedel.MakeSound();
    toby.MakeSound();
}