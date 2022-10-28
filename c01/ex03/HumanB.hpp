/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:34:47 by rimney            #+#    #+#             */
/*   Updated: 2022/09/29 07:45:03 by rimney           ###   ########.fr       */
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
        Weapon *W;
    public :
        HumanB(std::string human);
        void        setWeapon(Weapon &W);
        void        attack();
        std::string get_name(void);
        void        set_name(std::string name);
};

#endif