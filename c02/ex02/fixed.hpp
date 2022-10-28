/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:33:03 by rimney            #+#    #+#             */
/*   Updated: 2022/10/28 03:42:04 by rimney           ###   ########.fr       */
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
        static const int i;

    public :
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed &F);
        Fixed operator+(Fixed const &F);
        Fixed operator -(Fixed const &F);
        Fixed  operator /(Fixed const &F);
        Fixed operator *(Fixed const &F) ;
        Fixed  & operator=(Fixed const &F);

        Fixed operator++();
        // Fixed operator ++(int);
        // Fixed operator --();
        // Fixed operator --(int);

        ~Fixed();
        float   toFloat(void) const;
        int     toInt(void) const;
        int getRawBits(void) const;
        void   setRawBits(int const raw);
        // bool   operator>(Fixed const & aa);
        // bool   operator<(Fixed const & aa);


};
bool   operator>(Fixed const & aa, Fixed const & bb);
bool   operator<(Fixed const & aa, Fixed const & bb);


std::ostream & operator<<(std::ostream& op, const Fixed& o);




#endif
