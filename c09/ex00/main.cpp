/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:31:34 by rimney            #+#    #+#             */
/*   Updated: 2023/04/07 03:18:49 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
        bitcoinExchange A(argv[1]);
        
    // std::map<std::string, int> Map;

    // for(size_t i = 0; i <= 10; i++)
    // {
    //     Map.insert(std::make_pair(std::to_string(11), i));
    // }
    // for(std::map<std::string, int>::iterator i = Map.begin(); i != Map.end(); i++)
    // {
    //     std::cout << (*i).first << " << Key | Value >>" << (*i).second << std::endl;
    // }
    return (0);
}