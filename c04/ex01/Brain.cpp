/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:49:06 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 22:46:00 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "ideas";
    std::cout << "Brain Default Constuctor Called\n";
}

Brain::Brain(std::string ideas)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = ideas;
    std::cout << "Brain Paramitrized constructor Called\n";
}

Brain::Brain(Brain & B)
{
    *this = B;
    std::cout << "Brain Copy Constructor Called\n";
}

Brain & Brain::operator=(Brain const & B)
{
    for(int i = 0; i < 100; i++)
	{
        this->ideas[i] = B.ideas[i];
	}
    std::cout << "Brain copy Assigement Overload Called\n";
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called\n";
}

void    Brain::setIdeas(std::string idea, int n)
{
	this->ideas[n] = idea;
	std::cout << "setIdeas Function Called\n";
}

std::string Brain::getIdeas(int n) const 
{
	return (this->ideas[n]);
}