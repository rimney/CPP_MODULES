/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:28:50 by rimney            #+#    #+#             */
/*   Updated: 2023/04/07 04:44:54 by rimney           ###   ########.fr       */
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
        int minDate;
        int maxDate;
        std::map<std::string, double> dateRate;
    public :
        
        bitcoinExchange();
        bitcoinExchange(std::string path);
        void    assignCsvToMap(std::string line);
        int     dateToInt(std::string date);
        void    process(std::string line);
        void    construct_map(std::string path);
        
};


#endif