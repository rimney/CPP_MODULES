/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 00:46:43 by rimney            #+#    #+#             */
/*   Updated: 2022/09/27 01:07:04 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << _name << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
    std::cout << "Default constructor Called...\n";
}

Zombie::Zombie(std::string name)
{
    std::cout << "constructor Called...\n";
    this->_name = name;
}


Zombie::~Zombie()
{
    std::cout << _name << " died\n";
}