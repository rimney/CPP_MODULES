/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:23:56 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 12:50:03 by rimney           ###   ########.fr       */
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
        ATarget(std::string const & t);
        std::string const & getType(void) const;
        virtual ATarget * clone() const = 0;
        void    getHitBySpell(ASpell const & A) const;
};