/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:34:47 by rimney            #+#    #+#             */
/*   Updated: 2022/09/29 02:51:24 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private :
        std::string _Name;
        Weapon &W;
    public :
        HumanA(std::string human, Weapon &W);
        void        attack();
        std::string get_name(void);
        void        set_name(std::string name);
};


#endif