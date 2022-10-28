/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:29:24 by rimney            #+#    #+#             */
/*   Updated: 2022/10/26 20:42:18 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>

Class ClapTrap
{
    private :
        std::string name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        int     getHit_points(void);
        void    setHit_points(int point);
        void     getName(std::string Name);
        std::string 
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        
};

#endif