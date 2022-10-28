/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 00:53:33 by rimney            #+#    #+#             */
/*   Updated: 2022/10/09 15:04:07 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *t;

    t = newZombie("rimney");
    randomChump("rimney2.0");
    delete t;
    system("leaks BraiiiiiiinnnzzzZ");
}