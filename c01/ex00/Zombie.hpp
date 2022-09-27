/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 00:43:34 by rimney            #+#    #+#             */
/*   Updated: 2022/09/27 00:50:26 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private :
        std::string _name;
    public :
        void    announce(void);
        Zombie();
        Zombie(std::string name);
        ~Zombie();
};

Zombie *newZombie(std::string);
void    randomChump(std::string);

#endif
