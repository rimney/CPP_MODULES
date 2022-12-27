/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:03:05 by rimney            #+#    #+#             */
/*   Updated: 2022/12/12 18:18:46 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
    std::cout << "Span Default Constuctor Called\n";
}

Span::Span(unsigned int N) : max(N)
{
    std::cout << "Span Paramitrized Constuctor Called\n";
}

Span::Span(Span const & S)
{
    *this = S;
    std::cout << "Span Copy Constructor Called\n";
}

Span & Span::operator=(Span const & S)
{
    this->arr = S.arr;
    std::cout << "Span Copy Assignment Overload Called\n";
    return (*this);
}

Span::~Span()
{
    std::cout << "Span Destructor Called\n";
}

void    Span::addNumber(int number)
{
    if(max <= this->arr.size())
        throw(outOfRangeExeption());
    else
        this->arr.push_back(number);
}

int Span::shortestSpan(void)
{
    int span;
    int smallGap = 10000000;
    std::vector<int> temp = this->arr;
    std::vector<int>::iterator iter = temp.begin();
    std::sort(temp.begin(), temp.end());
    while(iter != temp.end())
    {
        span = *iter;
        iter++;
        if(*iter - span < smallGap && iter != temp.end())
        {
            smallGap = *iter - span;
            span = *iter - span;
        }
    }
    return (smallGap);
    
}

int Span::longestSpan(void)
{
    return (std::max_element(this->arr.begin(), this->arr.end()) - std::min_element(this->arr.begin(), this->arr.end()));
    
}