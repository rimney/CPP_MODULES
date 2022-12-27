/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:32:33 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 21:51:07 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    B = new Brain();
    std::cout << "Cat Default constructor Called\n";
}
 
Cat::Cat(std::string name) : Animal(name)
{
    B = new Brain();
    std::cout << "Cat Parameterized Constructor called\n";
}

Cat::Cat(Cat const  & C)
{
    this->B = new Brain();
    *B = *C.B;
    std::cout << "Cat copy constuctor called\n";
}

Cat::~Cat()
{
    delete B;
    std::cout << "Cat Destructor Called\n";
}

Cat & Cat::operator=(Cat const & C)
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

void Cat::makeSound(void) const
{
    std::cout << "MEAO!\n";
}

void    Cat::getIdeas(void)
{
    for(int i = 0; i < 100; i++)
        std::cout << B->getIdeas(i) << std::endl; 
}

