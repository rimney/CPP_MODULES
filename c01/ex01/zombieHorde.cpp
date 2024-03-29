/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:28:56 by rimney            #+#    #+#             */
/*   Updated: 2022/10/09 15:34:16 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if(N <= 0)
        std::exit(0);
    Zombie *Z = new Zombie[N];
    for(int i = 0; i < N; i++)
        Z[i].ft_set_name(name);
    return (Z);
}