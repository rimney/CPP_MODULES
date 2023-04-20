/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:12:44 by rimney            #+#    #+#             */
/*   Updated: 2023/04/20 02:51:37 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
#include <iostream>
#include <deque>
#include <vector>

class PmergeMe
{
    private :
        std::deque<int> Deque;
        std::vector<int> Vector;
    public :
        PmergeMe(std::string line);
        
};

#endif