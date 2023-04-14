/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:55:48 by rimney            #+#    #+#             */
/*   Updated: 2023/04/07 16:11:34 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int     bitcoinExchange::dateToInt(std::string date)
{
    size_t ret = 0;
	int count = 0;
	std::string buffer;
    
	for(int i = 0; i < date.size(); i++)
    {
        if(date[i] == '-')
		{
			count++;
			if(count > 2)
			{
				std::cerr << "Error : Extra dash ==> " << date << std::endl;
				exit(1);
			}
			if(i + 1 < date.size())
				i++;
		}
		buffer += date[i];
		
    }
	return (atoi(buffer.c_str()));
}

std::string* split_string(std::string str, char delimiter, int *size)
{
    std::string* tokens = new std::string[100];
    std::string token;
    size_t pos = 0;
    int i = 0;

    while ((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0, pos);
        tokens[i] = token;
        str.erase(0, pos + 1);
        i++;
    }

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


void	bitcoinExchange::process(std::string line)
{
	std::string *temp;
	int size = 0;
	
	temp = split_string(line, '|', &size);
	if(size == 1 || size > 2)
		std::cerr << "Error : bad input => "  << line << std::endl;
	else if(stoll(temp[1]) < 0 || stoll(temp[1]) > INT32_MAX)
	{
		if(stoll(temp[1]) < 0)
			std::cerr << "Error : not a positive integer\n";
		else
			std::cerr << "Error : too large a number\n";
	}
	if(temp[0].back() == ' ')
		temp[0].erase(temp[0].size() - 1);
	std::map<std::string, double>::iterator i = dateRate.find(temp[0]);
	if(i != dateRate.end())
	{
		std::cout << (*i).first << " => " << atof(temp[1].c_str()) <<  " = " << (*i).second * atof(temp[1].c_str()) << std::endl; 
	}
	else
		std::cerr << "Error : bad input => "  << temp[0] << std::endl;
		
			
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
	
	if(!buf || strcmp(buf, ".txt") || file.bad())
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
