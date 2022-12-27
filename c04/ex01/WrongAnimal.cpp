/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:50:00 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 16:04:07 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal()
{
    std::cout << "WrongAnimal Default Constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : Animal(type)
{
    std::cout << "WrongAnimal Paramitrized Constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal & W)
{
    std::cout << "WrongAnimal Copy Constructor called\n";
    *this = W;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & W)
{
    std::cout << "WrongAnimal Copy Assignment Overload Called\n";
    this->type  = W.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called\n";
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Hello there\n";
}