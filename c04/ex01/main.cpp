/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:04:51 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 22:10:55 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void main01()
{

    Cat *a = new Cat();
    Cat *p = new Cat(*a);
    Dog *x = new Dog();
    Dog *y = new Dog(*x);
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    
    p->getIdeas();
    std::cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    y->getIdeas();
    delete p;
    delete a;
    // delete x;
    // delete y;
    
}
int main()
{
    main01();
    system("leaks I_don’t_want_to_set_the_world_on_fire");
}