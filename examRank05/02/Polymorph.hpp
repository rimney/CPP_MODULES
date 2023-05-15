/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 02:13:53 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 02:21:42 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
class ASpell;

class Polymorph : public ASpell
{
    public :
        Polymorph();
        ~Polymorph();
        virtual ASpell * clone() const; 
};