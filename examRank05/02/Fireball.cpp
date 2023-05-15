/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FireBall.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 02:33:36 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 02:37:51 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(): ASpell("FireBall", "burnt to a crisp") {}
Fireball::~Fireball() {}

ASpell *Fireball::clone() const
{
    return (new FireBall());
}
