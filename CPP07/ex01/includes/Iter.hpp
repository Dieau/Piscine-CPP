/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:01:36 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/30 11:06:28 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void(*f)(T const &))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

template <typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
	return;
}

template <typename T>
void add(T const & x)
{
	T b = x;
	b += 1;
	std::cout << (b) << std::endl;
	return;
}

#endif