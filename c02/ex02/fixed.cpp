/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:39 by rimney            #+#    #+#             */
/*   Updated: 2022/10/31 08:31:29 by rimney           ###   ########.fr       */
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
    this->_fixed = i;
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

Fixed Fixed::operator+(Fixed const &F)
{
    std::cout << "Copy assignment operator calledn\n";
    this->_fixed += F._fixed;
    return *this;
}

Fixed Fixed::operator-(Fixed const &F)
{
    std::cout << "Copy assignment operator calledn\n";
    this->_fixed -= F._fixed;
    return *this;
}

Fixed Fixed::operator/(Fixed const &F)
{
    std::cout << "Copy assignment operator calledn\n";
    this->_fixed /= F._fixed;
    return *this;
}

Fixed Fixed::operator*(Fixed const &F) 
{
    std::cout << "Copy assignment operator calledn\n";
    return this->_fixed * F._fixed;;
}

bool   operator>(Fixed const & aa, Fixed const & bb)
{
    return (aa.getRawBits() > bb.getRawBits());
}


bool   Fixed::operator<=(Fixed const & aa)
{
    return ((this->getRawBits() < aa.getRawBits()) || this->getRawBits() == aa.getRawBits());
}

bool   Fixed::operator<(Fixed const & aa)
{
    return ((this->getRawBits() < aa.getRawBits()));
}

bool   Fixed::operator>(Fixed const & aa)
{
    return ((this->getRawBits() > aa.getRawBits()));
}

bool   Fixed::operator==(Fixed const & aa)
{
    return ((this->getRawBits() == aa.getRawBits()));
}

bool   Fixed::operator!=(Fixed const & aa)
{
    return ((this->getRawBits() != aa.getRawBits()));
}

bool   Fixed::operator>=(Fixed const & aa)
{
    return ((this->getRawBits() > aa.getRawBits()) || this->getRawBits() == aa.getRawBits());
}

float Fixed::toFloat(void) const
{
    float ii;

    ii = float(this->_fixed);
    return ((float) this->_fixed / (float) (1 << this->i));
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
    int ii;

    ii = (int)this->_fixed;
    return (ii);
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