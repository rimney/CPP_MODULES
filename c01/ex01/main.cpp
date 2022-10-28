/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:28:50 by rimney            #+#    #+#             */
/*   Updated: 2022/10/09 15:34:44 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Z = zombieHorde(5, "rimney");
    for(int i = 0; i < 5; i++)
        Z[i].announce();
     delete [] Z;
     system("leaks Moar_Brainz");
}