/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:13:23 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 05:01:29 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>

class ASpell;
class Warlock
{
    private :
        std::string name;
        std::string title;  
        std::map<std::string, ASpell *> map;
    public :
        Warlock(std::string const & n, std::string const & t);
        std::string const & getName(void) const;         
        std::string const & getTitle(void) const;
        void    setTitle(std::string const & title);
        void    introduce() const;
        void    learnSpell(ASpell * A);
        void    forgetSpell(std::string spell);
        void    launchSpell(std::string  spell, ATarget const & target);
        ~Warlock();
};
