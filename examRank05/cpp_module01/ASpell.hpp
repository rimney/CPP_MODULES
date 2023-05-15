/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:19:11 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 12:56:00 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ATarget.hpp"
class ATarget;
class ASpell
{
    protected :
        std::string name;
        std::string effects;
    public :
        ASpell(std::string const & n, std::string const & e);
        std::string const & getName(void) const;
        std::string const & getEffects(void) const;
        virtual ASpell * clone() const = 0;
        void    launch(ATarget const & A) const;
        virtual ~ASpell();
};