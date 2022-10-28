/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:33:03 by rimney            #+#    #+#             */
/*   Updated: 2022/10/28 03:33:15 by rimney           ###   ########.fr       */
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
        Fixed  operator=(Fixed const &F);
        ~Fixed();
        float   toFloat(void) const;
        int     toInt(void) const;

};

std::ostream &operator<<(std::ostream& op, const Fixed& o);

#endif
