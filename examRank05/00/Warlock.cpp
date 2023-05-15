/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:21:25 by rimney            #+#    #+#             */
/*   Updated: 2023/05/14 18:31:16 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const & n, std::string const & t) : name(n), title(t)
{
    std::cout << this->name << ": This looks like another boring day.\n";
}

std::string const & Warlock::getName(void) const
{
    return (this->name);
}

std::string const & Warlock::getTitle(void) const
{
    return (this->title);
}

void    Warlock::setTitle(std::string const & title)
{
    this->title = title;
}

void Warlock::introduce(void) const
{
    std::cout << name << ": I am " << name << ", " << title << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}

int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}