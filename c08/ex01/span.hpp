/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:19:45 by rimney            #+#    #+#             */
/*   Updated: 2022/12/12 17:36:07 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private :
        std::vector<int> arr;
        unsigned int max;
    public :
        Span();
        Span(unsigned int N);
        Span(Span const & S);
        Span & operator=(Span const & S);
        ~Span();
        void    addNumber(int number);
        int     shortestSpan();
        int     longestSpan();
        class outOfRangeExeption : public std::exception
        {
            public:
                const char * what() const throw()
                {
                    return "Out Of Range !!";
                }
        };
};

#endif