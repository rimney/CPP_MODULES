/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:24:49 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 21:59:51 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(std::string type);
        Animal(Animal & A);
        Animal & operator=(const Animal & A);
        virtual ~Animal();

        void    setType(std::string tt);
        std::string getType(void) const ;
        virtual void    makeSound() const = 0;
};

#endif
