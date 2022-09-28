/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:28:54 by rimney            #+#    #+#             */
/*   Updated: 2022/09/27 21:10:59 by rimney           ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);

#endif