/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:28:50 by rimney            #+#    #+#             */
/*   Updated: 2023/04/14 05:39:53 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange
#define BitcoinExchange

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>

class bitcoinExchange
{
    private :
        std::map<std::string, double> dateRate;
    public :
        
        bitcoinExchange();
        bitcoinExchange(std::string path);
        void    assignCsvToMap(std::string line);
        bool     checkDash(std::string date);
        void    process(std::string line);
        void    construct_map(std::string path);
        
};


#endif