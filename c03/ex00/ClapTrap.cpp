/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 06:20:56 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 02:47:25 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Contructor Called\n";
    this->HP = 10;
    this->EP = 10;
    this->AD = 0;
    this->name = "hamid";
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Paramitarized Contructor Called\n";
    this->HP = 10;
    this->EP = 10;
    this->AD = 0;
    this->name = name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& C)
{
    this->EP = C.EP;
    this->AD = C.AD;
    this->HP = C.AD;
    this->name = C.name;
    std::cout << "ClapTrap Copy Assignement overload Called\n";
    return *this;
}

ClapTrap::ClapTrap(ClapTrap& C)
{
    std::cout << "ClapTrap Copy constructor called\n";
    *this = C;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called\n";
}

void    ClapTrap::attack(const std::string &target)
{
    if(EP > 0)
    {
       std::cout << "ClapTrap : " << name << " " << "attacks : " << target << " causing " << AD << " attack damage !\n";
        EP -= 1;

    }
    else
        std::cout << "ClapTrap : No more energy points !\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if(HP <= 0)
    {
        std::cout << name << " is out of HP\n";
        return ;
    }
    HP -= amount;
    std::cout << "ClapTrap : " << name << "lost " << amount << " of HP\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(EP > 0)
    {
        std::cout << "ClapTrap just got repaired\n";
        HP += amount;
        EP -= 1;
    }
    else
        std::cout << "No energy points\n";
}