/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:21:46 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 12:55:46 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string const & n, std::string const & e) : name(n), effects(e) {}

std::string const & ASpell::getName(void) const
{
    return  (this->name);
}

std::string const & ASpell::getEffects(void) const
{
    return (this->effects);
}

void    ASpell::launch(ATarget const & A) const
{
    A.getHitBySpell(*this);
}

ASpell::~ASpell() {}