/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:24:49 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 21:45:29 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>
#include "animal.hpp"

class WrongAnimal
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal & A);
        WrongAnimal & operator=(const WrongAnimal & A);
        ~WrongAnimal();

        void    setType(std::string tt);
        std::string getType(void) const ;
        void    makeSound() const;
};

#endif
