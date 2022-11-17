/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:33:03 by rimney            #+#    #+#             */
/*   Updated: 2022/11/09 18:14:48 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int _fixed;
        static const int i;

    public :
        Fixed();
        Fixed(int f);
        Fixed(Fixed &F);
        int getRawBits(void) const;
        Fixed & operator=(Fixed const &F);
        ~Fixed();
        void    setRawBits(int const raw);
};


#endif