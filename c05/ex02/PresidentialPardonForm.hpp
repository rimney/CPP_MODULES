/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 01:33:31 by rimney            #+#    #+#             */
/*   Updated: 2022/11/18 03:22:30 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_FORM_HPP
# define PRESIDENTIAL_FORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    private :
        std::string target;
    public : 
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        std::string getTarget(void) const ;
        void    setTarget(std::string T);
        
};

#endif