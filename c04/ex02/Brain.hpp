/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:54:51 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 18:09:20 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"

class Brain
{
    protected :
        std::string ideas[100];
    public :
        Brain();
        Brain(std::string ideas);
        Brain(Brain & B);
        Brain & operator=(Brain const & B);
        ~Brain();
        std::string    getIdeas(int n) const ;
        void            setIdeas(std::string idea, int n);
        
};

 #endif