/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:02:00 by rimney            #+#    #+#             */
/*   Updated: 2022/12/06 06:35:44 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main()
{
    std::string str("this is a test of Template on string");
    ::iter(str.c_str(), str.length(), print_array);
    int arr[4] = {55, 11, 33, 5};
    ::iter<int>(arr, 4, print_array);
    return 0;
}