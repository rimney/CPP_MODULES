/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 04:13:45 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 03:02:43 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void    ScavTrap::guardGate(void)
{
    std::cout << name << " : " << "is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constuctor called\n";
    name = "hamid";
}

ScavTrap::ScavTrap(ScavTrap & S)
{
    std::cout << "ScavTrap copy constructor\n";
    *this = S;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    std::cout << "ScavTrap paramitrized Constructor called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called\n";
}

ScavTrap & ScavTrap::operator=(ScavTrap & C)
{
    std::cout << "ScavTrap Copy assignment overload Called\n";
    this->name = C.name;
    this->AD = C.AD;
    this->HP = C.HP;
    this->EP = C.EP;
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if(EP > 0)
    {
       std::cout << "ScavTrap : " << name << " " << "attacks : " << target << " causing " << AD << " attack damage !\n";
        EP -= 1;

    }
    else
        std::cout << "No more energy points !\n";
}