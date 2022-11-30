/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:02:00 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/29 11:02:00 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <class T>
class Array
{
	private:
		unsigned int  n;
		T *arr;
	public:
		Array():n(0), arr(NULL) {}

		~Array() {if (this->n > 0) delete[] this->arr;}

		Array(unsigned int n): n(n), arr(NULL) {this->arr = new T[this->n]();}

		unsigned int size() const {return this->n;}

		Array(Array<T> const &origin): n(origin.n), arr(NULL) {*this = origin;}

		class OutOfLimitsException: public std::exception 
		{
			virtual const char* what() const throw()
			{
				return ("Out of limits!");
			}
		};

		Array<T> &operator=(Array<T> const &origin)
		{
			if (this->n > 0)
				delete[] this->arr;
			this->arr = NULL;
			if (origin.n > 0)
			{
				this->arr = new T[origin.n]();
				for (unsigned int i = 0; i < origin.n; i++)
					this->arr[i] = origin.arr[i];
			}
			this->n = origin.n;
			return (*this);
		}

		T &operator[](unsigned int index)
		{
			if (index >= this->n)
				throw Array<T>::OutOfLimitsException();
			return (this->arr[index]);
		}

		T const &operator[](unsigned int index) const
		{
			return (operator[](index));
		}

};

#endif