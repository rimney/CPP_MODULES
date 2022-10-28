/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:39 by rimney            #+#    #+#             */
/*   Updated: 2022/10/28 03:34:48 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"




std::ostream &operator<<(std::ostream& op, const Fixed& o)
{
    op << o.toFloat();
    return (op);
}


const int Fixed::i=8;

Fixed::Fixed(const int i)
{
    std::cout << "Int Constructor Called\n";
     this->_fixed = (i << this->i);
}

Fixed::Fixed(const float i)
{
    std::cout << "Float Constructor Called\n";
    this->_fixed = roundf(i * (1 << this->i));
}

Fixed::Fixed()
{
    std::cout << "Constructor Called\n";
    _fixed = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &F)
{
    std::cout << "Copy constructor called\n";
    *this = F;
}

Fixed & Fixed::operator=(Fixed const &F)
{
    std::cout << "Copy assignment operator calledn\n";
    this->_fixed = F._fixed;
    return *this;
}

float Fixed::toFloat(void) const
{
    return ((float(_fixed) / (1 << this->i)));
}

int Fixed::toInt(void) const
{
    return _fixed >> this->i;
}