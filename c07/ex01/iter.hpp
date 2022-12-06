/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:55:55 by rimney            #+#    #+#             */
/*   Updated: 2022/12/06 06:34:50 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>

void print_array(T *array, size_t len)
{
    for(size_t i = 0; i < len; i++)
        std::cout << array[i] << std::endl;
}

template <typename T>

void    iter(T *addr, size_t len, void (*fun_ptr)(T *array, size_t len))
{
    fun_ptr(addr, len);
}


#endif