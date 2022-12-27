/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:51:36 by rimney            #+#    #+#             */
/*   Updated: 2022/12/12 21:11:47 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <iostream>
#include <stack>
template <class T>

class MutantStack : public std::stack<T>
{
    public :
        MutantStack()
        {
            std::cout << "MutanStack Default Constructor Called\n";
        }
        MutantStack(MutantStack & M)
        {
            *this = M;
            std::cout << "MutantStack copy Constructor Called\n";
        }
        MutantStack & operator=(MutantStack & M)
        {
            *this = M;
            std::cout << "MutantStack copy assignment overload called\n";
            return (*this);
        }
        ~MutantStack()
        {
            std::cout << "MutantStack Distructor Called\n";
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }

};

#endif