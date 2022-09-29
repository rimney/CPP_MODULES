/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:51:06 by rimney            #+#    #+#             */
/*   Updated: 2022/09/29 02:17:38 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

void Weapon::set_type(std::string typee)
{
    this->type = typee;
}

std::string Weapon::get_type(void)
{
    return (this->type);
}

Weapon::Weapon(std::string type)
{
    set_type(type);
}