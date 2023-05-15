/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:30:58 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 12:32:50 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"
class ASpell;

class Fireball : public ASpell
{
    public :
        Fireball();
        ~Fireball();
        virtual ASpell * clone() const;
};