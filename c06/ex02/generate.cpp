/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:33:11 by rimney            #+#    #+#             */
/*   Updated: 2022/11/29 22:29:18 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base * generate(void)
{
    int random = time(0) % 3;
    if(random == 0)
        return (new A);
    else if(random == 1)
        return (new B);
    else 
        return new C;
}



