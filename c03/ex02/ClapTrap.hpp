/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 06:15:40 by rimney            #+#    #+#             */
/*   Updated: 2022/11/11 02:39:17 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <iostream>

class ClapTrap
{
    protected :
        std::string name;
        int HP;
        int EP;
        int AD;
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap & C);
        ~ClapTrap();
        
        ClapTrap & operator=(ClapTrap const C);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);      
};

#endif