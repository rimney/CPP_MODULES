/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:32:56 by rimney            #+#    #+#             */
/*   Updated: 2022/12/12 21:54:40 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span S(10);
    try
    {
        for(int i = 1; i < 10; i += 1)
            S.addNumber(i);
        std::cout << S.shortestSpan() << std::endl;
        std::cout << S.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}