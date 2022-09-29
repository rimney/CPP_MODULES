/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:34:47 by rimney            #+#    #+#             */
/*   Updated: 2022/09/29 02:55:52 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string _Name;
        Weapon &W;
    public :
        HumanB(std::string human);
        void        attack();
        std::string get_name(void);
        void        set_name(std::string name);
        void        setWeapon(Weapon &W);
};

#endif