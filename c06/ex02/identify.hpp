/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:21:33 by rimney            #+#    #+#             */
/*   Updated: 2022/11/28 22:05:16 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP
#include <iostream>

class Base
{
    public :
        virtual ~Base()
        {
            std::cout << "Base Destructor called\n";
        }
};

class A : public Base
{
    public :
        ~A()
        {
            std::cout << "A Destructor called\n";
        }
};

class B : public Base
{
    public :
        ~B()
        {
            std::cout << "B Destructor called\n";
        }
};

class C : public Base
{
    public :
        ~C()
        {
            std::cout << "C Destructor called\n";
        }
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);
#endif