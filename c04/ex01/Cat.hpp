/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:40:27 by rimney            #+#    #+#             */
/*   Updated: 2022/11/13 01:42:34 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *B;
    public :
        Cat();
        Cat(std::string name);
        Cat(Cat const & C);
        Cat & operator=(Cat const & C);
        void    makeSound() const;
        void    getIdeas();
        ~Cat();
};
