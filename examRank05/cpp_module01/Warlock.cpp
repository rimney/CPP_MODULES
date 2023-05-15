/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:11:07 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 13:00:22 by rimney           ###   ########.fr       */
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

void Warlock::learnSpell(ASpell * A)
{
    if(A)
        this->map.insert(std::pair<std::string, ASpell *>(A->getName(), A->clone()));
}

void    Warlock::forgetSpell(std::string spell)
{
    std::map<std::string, ASpell *>::iterator it = this->map.find(spell);
    if(it != this->map.end())
        delete it->second;
    this->map.erase(spell);
}

void    Warlock::launchSpell(std::string spell, ATarget const & A)
{
    ASpell *s = this->map[spell];
    if(s)
        s->launch(A);
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
    for(std::map<std::string, ASpell *>::iterator it = this->map.begin(); it != this->map.end(); it++)
        delete it->second;
    this->map.clear();
}
