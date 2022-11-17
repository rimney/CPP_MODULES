/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 07:01:33 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 03:01:57 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap C("EE ");
    ClapTrap F;
    C.takeDamage(9);
    C.takeDamage(1);

    C.beRepaired(1);
    C.takeDamage(1);
    return (0); 
}