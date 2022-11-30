/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:01:19 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/29 11:01:20 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T & a, T & b)
{
	T z = a;
	a = b;
	b = z;
	return ;
}

template <typename T>
T & max( T & x, T & y)
{
	return ( x > y ? x : y);
}

template <typename T>
T & min( T & x, T & y)
{
	return ( x < y ? x : y);
}

#endif