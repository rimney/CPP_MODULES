/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:13:23 by rimney            #+#    #+#             */
/*   Updated: 2022/12/12 21:52:28 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>

// template <typename T>
// int    easyFind(T vec, int to_find)
// {
//     typename T::iterator i = vec.begin();
//     while(i != vec.end())
//     {
//         if(to_find == *i)
//         {
//             std::cout << "Found it \n";
//             return (1);
//         }
//         i++;
//     }
//     std::cout << "Couldn't find the number\n";
//     return (0);
// }
template <typename T>

int easyFind(T vec, int to_find)
{
    typename T::iterator i = vec.begin();
    i = std::find(vec.begin(), vec.end(), to_find);
    if(i != vec.end())
    {
        std::cout << "Found It !\n";
        return (1);
    }
    else
    {
        std::cout << "Element Not Found\n";
        return (0);
    }
    return (0);
}

#endif
