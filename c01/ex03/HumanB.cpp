/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 02:49:19 by rimney            #+#    #+#             */
/*   Updated: 2022/10/09 13:21:04 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"

void    HumanB::set_name(std::string name)
{
    this->_Name = name;
}

std::string HumanB::get_name(void)
{
    return (this->_Name);
}

HumanB::HumanB(std::string human) 
{
    this->_Name = human;
}

void    HumanB::attack(void)
{
    std::cout << get_name() << " attack with their ";
    if(W)
        std::cout << W->get_type();
    std::cout << "\n";
}

void    HumanB::setWeapon(Weapon &Wep)
{
    this->W = &Wep;
}