/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:12:44 by rimney            #+#    #+#             */
/*   Updated: 2023/04/26 11:34:15 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
#include <iostream>
#include <deque>
#include <string>
#include <vector>

class PmergeMe
{
    private :
        std::deque<int> Deque;
        std::vector<int> Vector;
    public :
        PmergeMe(std::vector<std::string> buffer);


        
};

#endif