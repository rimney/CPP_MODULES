/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:54:49 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 21:48:05 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "Lbachir";
    std::cout << "WrongAnimal Constructor Called\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
    setType(type);
    std::cout << "WrongAnimal paramitrized Constructor Called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal & A)
{
    std::cout << "WrongAnimal copy constuctor called\n";
    *this = A;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & A)
{
    std::cout << "WrongAnimal copy assignement overload called\n";
    this->type = A.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Distructor called\n";
}

void WrongAnimal::setType(std::string tt) 
{
    this->type = tt;
}

std::string WrongAnimal::getType(void) const 
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "LBACHIR IS HERE B**HES!" << std::endl;
}

