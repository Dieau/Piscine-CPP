/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:01 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:01 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "New Brain created." << std::endl;
	this->ideas[0] = "randomthougth 0 ";
	this->ideas[1] = "i like ice cream ";
	this->ideas[2] = " miaou ";
	this->ideas[3] = " wouf ";
	for (int i = 4; i < 100; i++)
	{
		this->ideas[i] = "";
	}
}

Brain::Brain(const Brain& Cp)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = Cp.ideas[i];
	}
	std::cout << "Brain has been Copied!" << std::endl;
}

Brain& Brain::operator =(const Brain& Cp)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = Cp.ideas[i];
	}
	std::cout << "Brain has been Copied!" << std::endl;
	return(*this);
}

Brain::~Brain()
{
	std::cout << "A Brain has been destroyed!" << std::endl;
}