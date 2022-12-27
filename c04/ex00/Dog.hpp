/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:41:01 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 01:02:39 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"


class Dog : public Animal
{
    public :
        Dog();
        Dog(std::string name);
        Dog( Dog & D);
        Dog & operator=(Dog const & C);
        ~Dog();
        void            makeSound() const;     
};