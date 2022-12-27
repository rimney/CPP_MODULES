/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:54:49 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 16:16:57 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
    type = "Lbachir";
    std::cout << "Animal Constructor Called\n";
}

Animal::Animal(std::string type)
{
    setType(type);
    std::cout << "Animal paramitrized Constructor Called\n";
}

Animal::Animal(Animal & A)
{
    std::cout << "Animal copy constuctor called\n";
    *this = A;
}

Animal & Animal::operator=(const Animal & A)
{
    std::cout << "Animal copy assignement overload called\n";
    this->type = A.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Distructor called\n";
}

void Animal::setType(std::string tt) 
{
    this->type = tt;
}

std::string Animal::getType(void) const 
{
    return (type);
}

void    Animal::makeSound() const
{
    std::cout << "?????????" << std::endl;
}

