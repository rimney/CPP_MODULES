/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:44:11 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 02:24:20 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected :
        std::string type;
    public :
        ATarget(std::string const & T);
        std::string const & getType(void) const;
        virtual ATarget * clone() const = 0;
        ~ATarget();
        void    getHitBySpell(ASpell const & A) const;
};