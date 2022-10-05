/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:43:20 by rimney            #+#    #+#             */
/*   Updated: 2022/10/04 09:57:41 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}


int levell(std::string level)
{
    std::string l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 4)
    {
        if(level == l[i])
            return (i);
        i++;
    }
    std::exit(0); 
}

void    Harl::complain(std::string level)
{
    
    int i = 0;
    void (Harl::*ptrF[4])(void) = {
       &Harl::debug,
       &Harl::info,
       &Harl::warning,
       &Harl::error
    };
    ((this->*ptrF[levell(level)]))();
    
}