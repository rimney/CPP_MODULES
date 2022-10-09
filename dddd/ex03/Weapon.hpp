/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:35:15 by rimney            #+#    #+#             */
/*   Updated: 2022/09/29 02:03:15 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>


class Weapon
{
    public :
        Weapon();
        Weapon(std::string type);
        void        set_type(std::string type);
        std::string get_type(void);
    private :
        std::string type;
};

#endif