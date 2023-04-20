/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:55:48 by rimney            #+#    #+#             */
/*   Updated: 2023/04/20 03:36:06 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


bool is_all_digits(std::string temp)
{
	if(!temp.size())
		return (false);
	for(size_t i = 0; i < temp.size(); i++)
    {
		if(temp[i] == '-')
			continue ;
        if(!isdigit(temp[i]))
            return (false);
    }
    return (true);
}

bool     bitcoinExchange::checkDash(std::string date)
{
	int count = 0;
    
	for(int i = 0; i < date.size(); i++)
    {
        if(date[i] == '-')
		{
			count++;
			if(count > 2)
				return (false);
		}
		
    }
	return (true);
}


std::string* split_string(std::string str, char delimiter, int *size)
{
    std::string* tokens = new std::string[100];
    std::string token;
    size_t pos = 0;
    int i = 0;

    while ((pos = str.find(delimiter)) != std::string::npos)
	{
        token = str.substr(0, pos);
        tokens[i] = token;
        str.erase(0, pos + 1);
        i++;
    }
	str.erase(0, str.find_first_not_of(" \t"));
    str.erase(str.find_last_not_of(" \t") + 1);
    tokens[i] = str;
	*size = i + 1;
    return tokens;
}



void    bitcoinExchange::assignCsvToMap(std::string line)
{
	int size = 0;
	std::string *temp;

	temp = split_string(line, ',', &size);
	if(size > 2)
	{
		std::cerr << "Error : extra comma ==> " << line << std::endl;
		exit(1);
	}
	this->dateRate.insert(std::make_pair(temp[0], atof(temp[1].c_str())));
	if(size > 0)
		delete [] temp;
}

bool	date_is_correct(std::string date)
{
	int size = 0;
	std::string *temp = split_string(date, '-', &size);
	// for(int i = 0; i < size; i++)
	// 	std::cout << temp[i] << " <<\n";
	if(size < 3)
		return (false);
	if(atoi(temp[0].c_str()) < 2009)
		return (false);
	if(atoi(temp[1].c_str()) < 0 || atoi(temp[1].c_str()) > 12)
		return (false);
	if(atoi(temp[2].c_str()) < 0 || atoi(temp[2].c_str()) > 31)
		return (false);
	if(atoi(temp[1].c_str()) == 2 && atoi(temp[2].c_str()) > 27)
		return (false);
	return (true);
}

void	bitcoinExchange::process(std::string line)
{
	std::string *temp;
	int size = 0;
	int count = 0;

	temp = split_string(line, '|', &size);
	if(size == 1 || size > 2 || !date_is_correct(temp[0]) || !checkDash(temp[0]) || !is_all_digits(temp[1]))
	{
		std::cerr << "Error : bad input => "  << line << std::endl;
		return ;
	}
	else if(stoll(temp[1]) < 0 || stoll(temp[1]) > INT32_MAX)
	{
		if(stoll(temp[1]) < 0)
		{
			std::cerr << "Error : not a positive integer\n";
			return ;
		}
		else
		{
			std::cerr << "Error : too large a number\n";
			return ;
		}
	}
	if(temp[0].back() == ' ')
		temp[0].erase(temp[0].size() - 1);
	for(size_t i = 0; i < temp[1].size(); i++)
	{
		if (temp[1][i] == ',' || temp[1][i] == '.')
		{
			temp[1][i] = '.';
			count += 1;				
		}
		if (count > 1)
		{
			std::cerr << "Error : bad input => " << line << std::endl;
			return ;
		}
	}
	std::map<std::string, double>::iterator i = dateRate.lower_bound(temp[0]);
	// std::map<std::string, double>::iterator i = dateRate.find(temp[0]);
	if(i != dateRate.end())
	{
		std::cout << (*i).first << " => " << atof(temp[1].c_str()) <<  " = " << (*i).second * atof(temp[1].c_str()) << std::endl; 
	}
	else
	{
		i--;
		// std::map<std::string, double>::iterator i = dateRate.lower_bound(temp[0]);
		// // std::map<std::string, double>::iterator i = dateRate.find(temp[0]);
		if(i != dateRate.end())
		{
			std::cout << (*i).first << " => " << atof(temp[1].c_str()) <<  " = " << (*i).second * atof(temp[1].c_str()) << std::endl; 
		}
	}
	delete [] temp;
}

void	bitcoinExchange::construct_map(std::string path)
{
    std::ifstream file(path);
    std::string line;
    int index = 0;
    if(!file.good())
    {
        std::cerr << "Error : can't open or find 'data.csv' file !\n";
        exit(1);
    }
    if(file.is_open())
    {
        while (getline(file, line))
        {
            if(index >= 1)
			{
				assignCsvToMap(line);
			}
            index++;
        }
    }
    file.close();
}

bitcoinExchange::bitcoinExchange()
{
	this->construct_map("data.csv");
}

bitcoinExchange::bitcoinExchange(std::string path)
{
	this->construct_map("data.csv");
	std::ifstream file(path);
	char const *buf = strrchr(path.c_str(), '.');
	std::string line;
	std::string dateKey;
	
	if(file.bad())
	{
		std::cerr << "Error : Cannot Open or Can't fine the File !";
		exit(1);
	}
	if(file.is_open())
	{
		int index = 0;
		
		while(getline(file, line))
		{
			if(index > 0)
				this->process(line);
			index++;
		}
	}
	file.close();
}
