/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:52:06 by rimney            #+#    #+#             */
/*   Updated: 2022/12/13 02:42:33 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyFind.hpp"

int main()
{
    std::vector<int> ar;
    ar.push_back(1);
    ar.push_back(2);
    ar.push_back(3);
    ar.push_back(4);
    ar.push_back(5);
    ar.push_back(6);
    easyFind(ar, 6);
    return (0);
}