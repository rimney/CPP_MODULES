/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:08:37 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 13:01:44 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"
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
        void    introduce(void) const;
        void    learnSpell(ASpell * A);
        void    forgetSpell(std::string spell);

        void    launchSpell(std::string spell, ATarget const & A);
        ~Warlock(); 
};