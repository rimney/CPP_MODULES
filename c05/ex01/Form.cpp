/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:51:49 by rimney            #+#    #+#             */
/*   Updated: 2022/11/17 00:36:35 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Laaebi"), is_signed(false), sign_grade(149), execute_grade(2)
{
    std::cout << "Form Default constructor Called\n";
}

Form::Form(std::string name, const int sign_grade, const int execute_grade) : name(name), sign_grade(sign_grade), execute_grade(execute_grade)
{
    this->is_signed = false;
    std::cout << "Form Paramitrized Constructor Called\n";
}

Form::Form(Form & F) : name(F.name), is_signed(F.is_signed), sign_grade(F.sign_grade), execute_grade(F.execute_grade)
{
    *this = F;
    std::cout << "Form Copy Constructor Called\n";
}


Form & Form::operator=(Form const & F)
{
    std::cout << "Form Copy Assignment Overload Called\n";
    this->is_signed = F.is_signed;
    return *this;
}

void    Form::beSigned(Bureaucrat B)
{
    if(sign_grade < 1 || execute_grade < 1)
        throw(GradeTooHighException());
    else if (sign_grade > 150 || execute_grade > 1)
        throw(GradeTooLowException());
    this->is_signed = true;
}
