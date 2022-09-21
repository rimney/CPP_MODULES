/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 02:41:54 by rimney            #+#    #+#             */
/*   Updated: 2022/09/20 03:32:04 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int argc, char **argv)
{
    int i;
    int j;
    char c;

    for(j = 1; j < argc; j++)
    {
        for(i = 0; i < argv[j][i] ;i++)
        {
            c = toupper(argv[j][i]);
            std::cout << c;
        }
        std::cout << " ";
    }
    std::cout << std::endl;
}