/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 02:50:43 by rimney            #+#    #+#             */
/*   Updated: 2022/11/25 18:24:04 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & I);
        ~Intern();
        
        
        Form *makeForm(std::string nameForm, std::string target);
        class errorForm : public std::exception
        {
            public:
                const char * what() const throw()
                {
                    return "there was an error while creating the form\n";
                }
        };
};

#endif