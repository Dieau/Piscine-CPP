/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:42:48 by alakhdar          #+#    #+#             */
/*   Updated: 2022/11/04 12:42:49 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    public:

        Cat();
        Cat(const Cat& Cp);
        virtual Cat &operator =(const Cat& Cp);

        virtual ~Cat();
        
        virtual void    MakeSound();
        virtual Brain*  GetBrain();

    private:

        Brain *_brain;
};

#endif