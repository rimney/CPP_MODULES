/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:18:00 by rimney            #+#    #+#             */
/*   Updated: 2023/04/08 01:04:52 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

std::vector<std::string> split_string(std::string str, char delimiter, size_t *size)
{
    std::vector<std::string> tokens;
    std::string token;
    size_t pos = 0;
    int i = 0;

    while ((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0, pos);
        tokens.push_back(token);
        str.erase(0, pos + 1);
        i++;
    }

    tokens.push_back(str);
	*size = i + 1;
    return tokens;
}

template <class ForwardIterator>
double mySort(ForwardIterator first, ForwardIterator last)
{
    clock_t start = clock();
    bool swapped = true;
    while(swapped)
    {
        swapped = false;
        for(ForwardIterator it = first; it != last; ++it)
        {
            ForwardIterator next = it;
            ++next;
            if(next != last && *it > *next)
            {
                std::iter_swap(it, next);
                swapped = true;
            }
        }
    }
    clock_t end = clock();
    double result = static_cast<double> (end - start) / CLOCKS_PER_SEC;
    return (result);
}

template <class BidirectionalIterator>
void checkDuplicates(BidirectionalIterator first, BidirectionalIterator last)
{
    while(first < last - 1)
    {
        BidirectionalIterator temp = first + 1;
        while(temp < last)
        {
            if(*first == *temp)
            {
                std::cerr << "Error: Duplicate Input\n";
                exit(1);
            }
            temp++;
        }
        first++;
    }
}


bool is_all_digits(std::string temp)
{
    for(size_t i = 0; i < temp.size(); i++)
    {
        if(!isdigit(temp[i]))
            return (false);
    }
    return (true);
}




PmergeMe::PmergeMe(std::string line)
{
	size_t size = 0;
    double time;
	std::vector<std::string> buffer = split_string(line, ' ', &size);
    for(size_t i = 0; i < buffer.size(); i++)
    {
        if(!is_all_digits(buffer[i]))
        {
            std::cerr << "Error : Wrong input >> " << buffer[i] << std::endl;
            exit(1);
        }
        this->Stack.push_back(atoi(buffer[i].c_str()));
        this->Deque.push_back(atoi(buffer[i].c_str()));
    }
    checkDuplicates(this->Stack.begin(), this->Stack.end());
    for(size_t i = 0; i < buffer.size(); i++)
    {
        if(i == 0)
        {
            std::cout << "Before :" << "\t";
        }
        std::cout << buffer[i] << " "; 
    }
    std::cout << std::endl;
    time = mySort(this->Stack.begin(), this->Stack.end());
    
    for(size_t i = 0; i < this->Stack.size(); i++)
    {
        if(i == 0)
        {
            std::cout << "After : " << "\t";
        }
        std::cout << Stack[i] << " "; 
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << this->Stack.size() << " elements with std::stack : " << std::fixed << time << std::endl;
    time = mySort(this->Deque);
    
}

