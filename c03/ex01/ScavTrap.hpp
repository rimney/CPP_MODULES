/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 04:13:48 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 02:31:19 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        void    attack(const std::string &target);
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap & S);
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap & C);
        void    guardGate();
};
# endif