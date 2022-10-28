/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 06:20:56 by rimney            #+#    #+#             */
/*   Updated: 2022/10/28 07:08:10 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Contructor Called\n";
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Contructor Called\n";
    this->HP = 10;
    this->EP = 10;
    this->AD = 0;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called\n";
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
    if((int)amount > 0)
        HP -= amount;
    else
        std::cout << "ClapTrap : " << name << "lost " << amount << "of HP";

}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(EP > 0 && (int)amount > 0)
    {
        HP += amount;
        EP -= 1;
    }
    else
        std::cout << "No energy points\n";
}