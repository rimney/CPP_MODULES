/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:53:21 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 02:46:17 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void    FragTrap::highFivesGuys(void)
{
    std::cout << name << " : " << "High Five Guys\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap paramitrized Constructor called\n";
    this->name = name;
}

FragTrap::FragTrap(FragTrap & F) : ClapTrap(F)
{
    std::cout << "FragTrap copy contructor called\n";
    *this = F;
}

FragTrap & FragTrap::operator=(const FragTrap &F)
{
    std::cout << "FragTrap copy assignment overload Called";
    this->AD = F.AD;
    this->EP = F.EP;
    this->HP = F.AD;
    this->name = F.name;
    return *this;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constuctor called\n";
    name = "laarbi";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called\n";
}

void FragTrap::attack(const std::string &target)
{
    if(EP > 0)
    {
       std::cout << "FragTrap : " << name << " " << "attacks : " << target << " causing " << AD << " attack damage !\n";
        EP -= 1;

    }
    else
        std::cout << "No more energy points !\n";
}

