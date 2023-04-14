/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:21:27 by rimney            #+#    #+#             */
/*   Updated: 2023/04/07 16:25:15 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <string>
#include <stack>

class RPN
{
    private :
        std::stack<int> s;
    public :
        RPN(std::string line);
        
};

#endif