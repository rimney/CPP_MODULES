/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:33:03 by rimney            #+#    #+#             */
/*   Updated: 2022/11/09 21:22:11 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
    private :
        int _fixed;
        static const int i = 8;

    public :
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed &F);
        Fixed operator+(Fixed const &F) const;
        Fixed operator -(Fixed const &F) const ;
        Fixed operator /(Fixed const &F) const ;
        Fixed operator *(Fixed const &F) const ;
        Fixed  & operator=(Fixed const &F);

        Fixed operator++();
        Fixed operator ++(int);
        Fixed operator --();
        Fixed operator --(int);

        float  toFloat(void) const;
        int    toInt(void) const;
        int    getRawBits(void) const;
        void   setRawBits(int const raw);
        bool   operator>=(Fixed const & aa) const;
        bool   operator<=(Fixed const & aa) const;
        bool   operator==(Fixed const & aa) const;
        bool   operator<(Fixed const & aa) const;
        bool   operator>(Fixed const & aa)const ;
        bool   operator!=(Fixed const & aa) const;

        static Fixed & min(Fixed &a, Fixed &b);
        static const Fixed & min(Fixed const & a, Fixed const & b);
        static Fixed & max(Fixed &a, Fixed &b);
        static const Fixed & max(const Fixed &a, const Fixed &b);
        ~Fixed();
};

std::ostream & operator<<(std::ostream& op, const Fixed& o);
#endif
