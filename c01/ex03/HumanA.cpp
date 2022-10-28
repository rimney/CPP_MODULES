/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:45:05 by rimney            #+#    #+#             */
/*   Updated: 2022/10/09 14:38:29 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"



void    HumanA::set_name(std::string name)
{
    this->_Name = name;
}

std::string HumanA::get_name(void)
{
    return (this->_Name);
}

HumanA::HumanA(std::string human, Weapon &W) :
    W(W)
{
    this->_Name = human;
}

void    HumanA::attack(void)
{
    std::cout << get_name() << " attack with their " << W.get_type() << std::endl;
}