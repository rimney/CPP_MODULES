/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 06:20:56 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 03:41:36 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClavTrap Default Contructor Called\n";
}

ClapTrap::ClapTrap(std::string name) 
{
    std::cout << "ClapTrap Paramitarized Contructor Called\n";
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called\n";
}

ClapTrap & ClapTrap::operator=(ClapTrap const C)
{
    this->EP = C.EP;
    this->AD = C.AD;
    this->HP = C.AD;
    std::cout << "Copy Assignement overload Called\n";
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if(EP > 0)
    {
       std::cout << "ClapTrap : " << name << " " << "attacks : " << target << " causing " << AD << " attack damage !\n";
        EP -= 1;

    }
    else
        std::cout << "No more energy points !\n";
}

ClapTrap::ClapTrap(ClapTrap & C)
{
    std::cout << "Copy wla zebi constructor called\n";
    *this = C;
}

void    ClapTrap::takeDamage(unsigned int amt)
{
    if(HP <= 0)
        std::cout << name << " is out of HP a zebi\n";
    else if((int)amt > 0)
    {
        HP -= amt;
        std::cout << "" << name << " lost " << amt << " of HP a zebi\n";
    }
}

void    ClapTrap::beRepaired(unsigned int amt)
{
    if(EP > 0 && (int)amt > 0)
    {
        HP += amt;
        EP -= 1;
    }
    else
        std::cout << "No energy points\n";
}