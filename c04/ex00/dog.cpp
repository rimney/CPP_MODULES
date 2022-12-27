/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:22:47 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 01:02:27 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor Called\n";
}

Dog::Dog(std::string name) : Animal(name)
{
    std::cout << "Dog Parameterized Constructor called\n";
}

Dog::Dog(Dog & D)
{
    *this = D;
    std::cout << "Dog copy constructor called\n";
}

Dog & Dog::operator=(Dog const & C)
{
    std::cout << "Dog Copy assignment overload called\n";
    this->type = C.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called\n";
}

void Dog::makeSound(void) const
{
    std::cout << "WOOF!\n";
}
