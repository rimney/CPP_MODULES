/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:38:10 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 04:44:03 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

void    SpellBook::learnSpell(std::string spell)
{
    std::map<std::string, Aspell *>::iterator it = this->map.find(spell);
    if(it != this->map.end())
    {
        delete it->second;
    }
    this->map.erase(spell);
}

void SpellBook::forgetSpell(std::string const &spell_name)
{
    std::map<std::string, Aspell *>::iterator it = this->map.find(spell);
    if(it != this->map.end())
    {
        delete it->second;
    }
    this->map.erase(spell);
}

ASpell* SpellBook::createSpell(std::string const &spell_name)
{
    std::map<std::string, Aspell *>::iterator it = this->map.find(spell);
    if(it != this->map.end())
    {
        retrun (this->map[spell]);
    }
    return NULL;
}


SpellBook::~SpellBook()
{
    for(std::map<std::string, ASpell *>::iterator it = this->map.begin(); it != this->map.end(); it++)
        delete it->second;
    this->map.clear();
}
