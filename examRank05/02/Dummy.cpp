/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 02:33:36 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 02:33:56 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy") {}
Dummy::~Dummy() {}

ATarget *Dummy::clone() const
{
    return (new Dummy());
}
