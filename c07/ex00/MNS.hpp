/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MNS.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:08:55 by rimney            #+#    #+#             */
/*   Update: 2022/12/05 00:10:09 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MNS_HPP
# define MNS_HPP
#include <iostream>

template <typename T>

void swap(T a, T b)
{
    T c;

    c = a;
    a = b;
    b = c;
}

template <typename T>

T min(T a, T b) {return (a > b ? a : b);}

template <typename T>
T max(T a, T b) {return (a < b ? a : b);}

#endif