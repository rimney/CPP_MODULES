/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:18:00 by rimney            #+#    #+#             */
/*   Updated: 2023/04/26 11:51:45 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

void    mergeLeftRight(std::vector<int> & vec, std::vector<int> & left, std::vector<int> & right)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    while(i < left.size() && j < right.size())
    {
        if(left[i] < right[j])
            vec[k++] = left[i++];
        else
            vec[k++] = right[j++];
    }
    while(j < right.size())
        vec[k++] = right[j++];
    while(i < left.size())
        vec[k++] = left[i++];
}

void    mergeInsertVector(std::vector<int> & vec)
{
    int key = 0;
    size_t i = 0;
    int j = 0;
    while(i < vec.size())
    {
        j = i - 1;
        key = vec[i];
        while(j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
        i++;
    }
}

double mySortVector(std::vector<int> & vec)
{
    clock_t start = clock();
    // 
    if(vec.size() <= 1)
    {
        clock_t end = clock();
        double result = static_cast<double> (end - start) / CLOCKS_PER_SEC;
        return (result);
    }
    if(vec.size() <= 32)
    {
        mergeInsertVector(vec);
        clock_t end = clock();
        double result = static_cast<double> (end - start) / CLOCKS_PER_SEC;
        return (result);
    }
    size_t middle = vec.size() / 2;
    std::vector<int> right(vec.begin() + middle, vec.end());
    std::vector<int> left(vec.begin(), vec.begin() + middle);       
    //
    mySortVector(left);
    mySortVector(right);
    mergeLeftRight(vec, left, right);
    clock_t end = clock();
    double result = static_cast<double> (end - start) / CLOCKS_PER_SEC;
    return (result);
}

void checkDuplicatesvVector(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    while(first < last - 1)
    {
        std::vector<int>::iterator  temp = first + 1;
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

void checkDuplicatesDeque(std::deque<int>::iterator first, std::deque<int>::iterator last)
{
    while(first < last - 1)
    {
        std::deque<int>::iterator  temp = first + 1;
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


PmergeMe::PmergeMe(std::vector<std::string> buffer)
{
	size_t size = 0;
    double time;
    for(size_t i = 0; i < buffer.size(); i++)
    {
        if(!is_all_digits(buffer[i]))
        {
            std::cerr << "Error : Wrong input >> " << buffer[i] << std::endl;
            exit(1);
        }
        this->Vector.push_back(atoi(buffer[i].c_str()));
        this->Deque.push_back(atoi(buffer[i].c_str()));
    }
    checkDuplicatesvVector(this->Vector.begin(), this->Vector.end());
    // for(size_t i = 0; i < buffer.size(); i++)
    // {
    //     if(i == 0)
    //     {
    //         std::cout << "Before :" << "\t";
    //     }
    //     std::cout << buffer[i] << " "; 
    // }
    // std::cout << std::endl;
    time = mySortVector(this->Vector);
    
    // for(size_t i = 0; i < this->Stack.size(); i++)
    // {
    //     if(i == 0)
    //     {
    //         std::cout << "After : " << "\t";
    //     }
    //     std::cout << Stack[i] << " "; 
    // }
    // std::cout << std::endl;
    std::cout << "Time to process a range of " << this->Vector.size() << " elements with std::stack : " << std::fixed << time << std::endl;
    // time = mySortVector(this->Vector);

    
}

