/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:32:33 by rimney            #+#    #+#             */
/*   Updated: 2022/11/13 01:37:23 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor Called\n";
}
 
Cat::Cat(std::string name) : Animal(name)
{
    std::cout << "Cat Parameterized Constructor called\n";
}

Cat::Cat(Cat & C)
{
    std::cout << "Cat copy constuctor called\n";
    *this = C;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called\n";
}

Cat & Cat::operator=(Cat const & C)
{
    std::cout << "Copy assignment overload called\n";
    this->type = C.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "MEAO!\n";
}

