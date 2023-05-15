/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:25:48 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 04:32:10 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"
#include <map>

class ATarget;
class TargetGenerator
{
    private :
        std::map<std::string, ATarget *> map;
    public :
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget * A);
        void forgetTargetType(string const & type);
        ATarget* createTarget(string const & target);



}