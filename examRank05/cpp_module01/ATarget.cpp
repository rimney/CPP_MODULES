/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:26:45 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 12:54:23 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string const & t) : type(t)
{

}

std::string const & ATarget::getType(void) const
{
    return (this->type);
}

void    ATarget::getHitBySpell(ASpell const & A) const
{
    std::cout << this->type << " has been " << A.getEffects() << "!\n";
}

