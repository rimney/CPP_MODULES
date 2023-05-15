/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 02:13:53 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 02:21:42 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
class ATarget;

class BrickWall : public ATarget
{
    public :
        BrickWall();
        ~BrickWall();
        virtual ATarget * clone() const; 
};