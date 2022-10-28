/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:39 by rimney            #+#    #+#             */
/*   Updated: 2022/10/24 01:59:12 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->setRawBits(0);
}

Fixed::Fixed(Fixed &F)
{
    std::cout << "Copy constructor called\n";
    *this = F;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->_fixed);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixed = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed & Fixed::operator=(Fixed const &F)
{
    std::cout << "Copy assignment operator calledn\n";
    this->_fixed = F.getRawBits();
    // _fixed = F._fixed;
    return *this;
}