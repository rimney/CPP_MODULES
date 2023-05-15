/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:47:47 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 02:42:57 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string const & T) : type(T)
{

}
std::string const & ATarget::getType(void) const
{
    return (this->type);
}

ATarget::~ATarget() {} 
void    ATarget::getHitBySpell(ASpell const & A) const
{
    std::cout << this->type << " has been " << A.getEffects() << "!\n";
}


