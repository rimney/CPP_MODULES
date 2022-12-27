/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:22:37 by rimney            #+#    #+#             */
/*   Updated: 2022/11/23 23:47:10 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("Target")
{
    std::cout << "PresidentialPardonForm Default Constructor Called\n";
    if(this->getSGrade() > 25 || this->getEGrade() > 5)
        throw(GradeTooLowException());
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
}
PresidentialPardonForm::PresidentialPardonForm(std::string name, const int sign_grade, const int execute_grade) : Form(name, sign_grade, execute_grade)
{
    std::cout << "PresidentialPardonForm Paramitrized Constructor Called\n";
    if(this->getSGrade() > 25 || this->getEGrade() > 5)
        throw(GradeTooLowException());
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target)
{
    if(this->getSGrade() > 25 || this->getEGrade() > 5)
        throw(GradeTooLowException());
    std::cout << getTarget() << "has been pardoned by Zaphod Beeblebrox\n";
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
