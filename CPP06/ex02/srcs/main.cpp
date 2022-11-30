/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:15:53 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/14 13:15:53 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	int choice = rand() % 3;

	if (choice == 0)
		return new A;
	else if (choice == 1)
		return new B;
	else
		return new C;
}

void identify_ptr(Base * p)
{
    std::cout << "Pointer identifier : ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown Base." << std::endl;
}

void identify_ref(Base& p)
{
    std::cout << "Reference identifier : ";
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return;
	} catch (...) {}

	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return;
	} catch (...) {}

	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return;
	} catch (...) {}
	std::cout << "Unknown Base." << std::endl;
}

int main()
{
	void *witness = NULL;
	srand(time(NULL));
	Base* base = generate();
	Base& ref = *base;
	identify_ptr(base);
	identify_ref(ref);
	identify_ptr(reinterpret_cast<Base *>(witness));
	return 0;
}