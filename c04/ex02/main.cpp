/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:04:51 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 22:04:42 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

void main01()
{

    Cat *a = new Cat();
    Cat *p = new Cat(*a);
    Animal *ss = new Cat(); // you it cannot work since it an abstract class
    p->getIdeas();
    // delete j;//should not create a leak
    delete p;
    delete a;
    
}
int main()
{
    main01();
    system("leaks a.out");
}