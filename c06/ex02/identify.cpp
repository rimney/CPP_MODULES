/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:32:36 by rimney            #+#    #+#             */
/*   Updated: 2022/11/28 22:18:15 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

void identify(Base *p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "it's A\n";
    else if(dynamic_cast<B*>(p))
        std::cout << "it's B\n";
    else if(dynamic_cast<C*>(p))
        std::cout << "it's C\n";
    else
        std::cout << "NONE\n";
}

void identify(Base& p)
{
    try
    {
        A &aa = dynamic_cast<A&>(p);
        std::cout << "it's A\n";
        (void)aa;
        
    }
    catch (const std::exception & e)
    {
        try
        {
            B &bb = dynamic_cast<B&>(p);
            std::cout << "it's B\n";
            (void)bb;
        }
        catch(std::exception & e)
        {
            try
            {
                C &cc = dynamic_cast<C&>(p);
                std::cout << "it's C\n";
                (void)cc;
            }
            catch(std::exception & e)
            {
                (void)e;
                std::cerr << "undifined type\n";
            }
        }
    }
}