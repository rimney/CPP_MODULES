/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 06:20:56 by rimney            #+#    #+#             */
/*   Updated: 2022/10/30 07:14:20 by rimney           ###   ########.fr       */
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
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;
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
        std::cout << "No more energy points !\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if(HP <= 0)
        std::cout << name << " is out of HP\n";
    else if((int)amount > 0)
    {
        HP -= amount;
        std::cout << "" << name << "lost " << amount << "of HP\n";
    }
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