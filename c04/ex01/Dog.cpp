/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:32:33 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 21:54:19 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    B = new Brain();
    std::cout << "Dog Default constructor Called\n";
}
 
Dog::Dog(std::string name) : Animal(name)
{
    B = new Brain();
    std::cout << "Dog Parameterized Constructor called\n";
}

Dog::Dog(Dog const  & C)
{
    this->B = new Brain();
    *B = *C.B;
    std::cout << "Dog copy constuctor called\n";
}

Dog::~Dog()
{
    delete B;
    std::cout << "Dog Destructor Called\n";
}

Dog & Dog::operator=(Dog const & C)
{
    if(this->B)
    {
        delete this->B;
        this->B = new Brain();
    }
    std::cout << "Copy assignment overload called\n";
    for(int i = 0; i < 100; i++)
        this->B->setIdeas(C.B->getIdeas(i), i);
    this->type = C.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "MEAO!\n";
}

void    Dog::getIdeas(void)
{
    for(int i = 0; i < 100; i++)
        std::cout << B->getIdeas(i) << std::endl; 
}

