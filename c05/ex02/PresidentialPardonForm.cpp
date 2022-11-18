/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:22:37 by rimney            #+#    #+#             */
/*   Updated: 2022/11/18 03:36:47 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("Target")
{
    if(this->getSGrade() > 145 || this->getEGrade() > 137)
        throw(GradeTooLowException());
    std::cout << "PresidentialPardonForm Default Constructor Called\n";
    printTree();
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target)
{
    if(this->getSGrade() > 145 || this->getEGrade() > 137)
        throw(GradeTooLowException());
    printTree();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Deastuctor Called\n";
}

void    PresidentialPardonForm::setTarget(std::string T)
{
    this->target = T;
}

std::string PresidentialPardonForm::getTarget(void) const 
{
    return (this->target);
}
