/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:34:08 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 02:45:32 by rimney           ###   ########.fr       */
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
        ASpell();
        ASpell(std::string const & n, std::string const & e);
        std::string const & getName(void) const;
        std::string const & getEffects(void) const;
        virtual ASpell * clone() const = 0;
        virtual ~ASpell();
        void    launch(ATarget const & A) const;
};