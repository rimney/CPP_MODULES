/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 06:41:54 by rimney            #+#    #+#             */
/*   Updated: 2022/12/06 07:35:45 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>

class Array
{
    private :
        T *array;
        int len;
    public :
        Array()
        {
            array = NULL;
            len = 0;
            std::cout << "Array Default Constuctor Called\n";
        }
        Array(unsigned int size)
        {
            array = new T[size];
            len = size;
            std::cout << "Array Paramitarized Constructor Called\n";
        }
        Array(Array const & B) : array(new T[B.len]), len(B.len)
        {
            *this = B;
            std::cout << "Array Copy Constructor Called\n";
        }
        Array & operator=(Array & A)
        {
            this->len = A.len;
            if(A.len > 0)
            {
                delete [] this->array;
                this->array = new T[this->len];
                for(unsigned int i = 0; i < len; i++)
                    this->array[i] = A.Array[i];
            }
            else
                this->array = NULL;

            return (*this);
        }
        class outOfRangeExeption : public std::exception
        {
            public:
                const char * what() const throw()
                {
                    return "Out Of Range !!";
                }
        };
        T & operator[](size_t index)
        {
            if(index > this->len || (int)index < 0)
                throw(outOfRangeExeption());
            return(this->array[index]);
        }
        
        int size()
        {
            int cc;
        
            cc = 0;
            while(cc < this->len)
                cc++;
            return (cc);
        }

        ~Array()
        {
            if(len > 1)
                delete[] array;
            std::cout << "Array Destructor Called;";
        }
        
};

#endif