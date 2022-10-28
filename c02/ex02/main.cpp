/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:32:53 by rimney            #+#    #+#             */
/*   Updated: 2022/10/28 03:43:14 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
   // std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    // std::cout << b << std::endl;
    //std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}