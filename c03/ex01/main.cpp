/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 06:50:31 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 03:41:18 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap C("EE");
    ScavTrap F;
    ClapTrap ZB("ZB");
    ZB.takeDamage(10);
    C.takeDamage(9);
    C.takeDamage(1);

    C.beRepaired(1);
    C.takeDamage(1);
    return (0); 
}