/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:39 by rimney            #+#    #+#             */
/*   Updated: 2022/11/09 21:22:04 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

std::ostream &operator<<(std::ostream& op, const Fixed& o)
{
    op << o.toFloat();
    return (op);
}

Fixed::Fixed(const int i)
{
    std::cout << "Int Constructor Called\n";
    this->_fixed = i << this->i;
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
    this->_fixed = F._fixed;
    return *this;
}

Fixed Fixed::operator+(Fixed const &F) const 
{
    Fixed tmp;
    tmp.setRawBits(this->_fixed + F._fixed);
    return tmp;
}

Fixed Fixed::operator-(Fixed const &F) const
{
    Fixed tmp;
    tmp.setRawBits(this->_fixed - F._fixed);
    return tmp;
}

Fixed Fixed::operator/(Fixed const &F) const
{
    Fixed tmp;
    tmp.setRawBits(((this->_fixed) / F._fixed) << this->i);
    return tmp;
}

Fixed Fixed::operator*(Fixed const &F) const
{
    Fixed tmp;
    tmp.setRawBits((this->_fixed * F._fixed) >> this->i);
    return tmp;
}


bool   Fixed::operator<=(Fixed const & aa) const
{
    return ((this->getRawBits() <= aa.getRawBits()));
}

bool   Fixed::operator<(Fixed const & aa) const
{
    return ((this->getRawBits() < aa.getRawBits()));
}

bool   Fixed::operator>(Fixed const & aa) const 
{
    return ((this->getRawBits() > aa.getRawBits()));
}

bool   Fixed::operator==(Fixed const & aa) const
{
    return ((this->getRawBits() == aa.getRawBits()));
}

bool   Fixed::operator!=(Fixed const & aa) const
{
    return ((this->getRawBits() != aa.getRawBits()));
}

bool   Fixed::operator>=(Fixed const & aa) const
{
    return (this->getRawBits() >= aa.getRawBits());
}

float Fixed::toFloat(void) const
{
    //printf("%f\n", (float) this->_fixed / (1 << this->i));
    return ((float) this->_fixed / (1 << this->i));
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

int Fixed::toInt(void) const
{
    return (this->_fixed << this->i);
}

Fixed Fixed::operator++()
{
    _fixed++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    ++_fixed;
    return *this;
}

Fixed Fixed::operator--()
{
    _fixed--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    --_fixed;
    return *this;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    if(a < b)
        return (a);
    else
        return (b);
}


Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if(a > b)
        return (a);
    else
        return (b);
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b)
{
    if(b > a)
        return (a);
    else
        return (b);
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b)
{
    if(a > b)
        return (a);
    else
        return (b);
}