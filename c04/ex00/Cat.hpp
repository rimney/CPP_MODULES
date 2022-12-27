/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:40:27 by rimney            #+#    #+#             */
/*   Updated: 2022/11/12 16:11:57 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(std::string name);
        Cat(Cat & C);
        Cat & operator=(Cat const & C);
        void    makeSound() const;
        ~Cat();
};
