/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:28:54 by rimney            #+#    #+#             */
/*   Updated: 2022/09/28 21:57:27 by rimney           ###   ########.fr       */
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
        void    ft_set_name(std::string name);
        Zombie();
        Zombie(std::string name);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif