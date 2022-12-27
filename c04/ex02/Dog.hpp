/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:40:27 by rimney            #+#    #+#             */
/*   Updated: 2022/11/14 21:55:01 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *B;
    public :
        Dog();
        Dog(std::string name);
        Dog(Dog const & C);
        Dog & operator=(Dog const & C);
        void    makeSound() const;
        void    getIdeas();
        ~Dog();
};
