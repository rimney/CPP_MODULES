/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:33:13 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 15:59:30 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

#include <iostream>
#include "animal.hpp"

class WrongAnimal : public Animal
{
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal & W);
        WrongAnimal & operator=(const WrongAnimal & W);
        ~WrongAnimal();
    
        void    setType(std::string type);
        std::string getType(void) const;
        virtual void    makeSound() const;

};

#endif