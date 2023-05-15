/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:11:07 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 12:17:09 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const & n, std::string const & t) : name(n), title(t)
{
    std::cout << this->name << ": This looks like another boring day.\n";
}

std::string const & Warlock::getName(void) const
{
    return (this->name);
}

std::string const & Warlock::getTitle(void) const
{
    return (this->title);
}

void    Warlock::setTitle(std::string const & title)
{
    this->title = title;
}


void    Warlock::introduce(void) const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}
