/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:38:18 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 21:38:18 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor Called\n";
}
 
WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
    std::cout << "WrongCat Parameterized Constructor called\n";
}

WrongCat::WrongCat(WrongCat & C)
{
    std::cout << "WrongCat copy constuctor called\n";
    *this = C;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called\n";
}

WrongCat & WrongCat::operator=(WrongCat const & C)
{
    std::cout << "Copy assignment overload called\n";
    this->type = C.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "LBACHIR IS HERE B**HES!\n";
}

