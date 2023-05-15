/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:38:13 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 04:41:17 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"
#include <map>

class ASpell;
class SpellBook
{
    private :
        std::map<std::string, ASpell *> map;
    public :
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell * A);
        void forgetSpell(string const & type);
        ASpell* createSpell(string const & target);



}