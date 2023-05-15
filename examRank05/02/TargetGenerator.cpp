/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:31:00 by rimney            #+#    #+#             */
/*   Updated: 2023/05/15 04:36:42 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

void    TargetGenerator::learnTargetType(std::string target)
{
    std::map<std::string, ATarget *>::iterator it = this->map.find(target);
    if(it != this->map.end())
    {
        delete it->second;
    }
    this->map.erase(target);
}

void    TargetGenerator::forgetTargetType(std::string const & target)
{
    std::map<std::string, ATarget *>::iterator it = this->map.find(target);
    if(it != this->map.end())
    {
        delete it->second;
    }
    this->map.erase(target);
}

void    TargetGenerator::createTarget(std::string const & target)
{
    std::map<std::string, ATarget *>::iterator it = this->map.find(target);
    if(it != this->map.end())
    {
        retrun (this->map[target]);
    }
    return NULL;
}


TargetGenerator::~TargetGenerator()
{
    for(std::map<std::string, ASpell *>::iterator it = this->map.begin(); it != this->map.end(); it++)
        delete it->second;
    this->map.clear();
}
