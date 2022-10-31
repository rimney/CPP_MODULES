/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 07:27:24 by rimney            #+#    #+#             */
/*   Updated: 2022/10/30 07:31:19 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_H
#define FLAG_TRAP_H
#include "ClapTrap.hpp"


class FlagTrap : ClapTrap
{
    public :
        FlagTrap(std::string name);
        void attack(const std::string& target);
        void highFivesGuys(void);    
};

#endif