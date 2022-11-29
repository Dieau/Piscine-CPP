/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:52 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:52 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
    public:

        Dog();
        Dog(const Dog& Cp);
        virtual Dog& operator =(const Dog& Cp);

        virtual ~Dog();

        virtual void    MakeSound();
        virtual Brain*  GetBrain();

    private:

        Brain   *_brain;
};

#endif