/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:30:58 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 12:32:50 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"
class ATarget;

class Dummy : public ATarget
{
    public :
        Dummy();
        ~Dummy();
        virtual ATarget * clone() const;
};