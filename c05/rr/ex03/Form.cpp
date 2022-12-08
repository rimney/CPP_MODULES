/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:51:49 by rimney            #+#    #+#             */
/*   Updated: 2022/11/25 18:43:28 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Laaebi"), is_signed(false), sign_grade(50), execute_grade(50)
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

Form::~Form()
{
    std::cout << "Form Distructor Called\n";
}

void    Form::beSigned(Bureaucrat B)
{
    if(sign_grade < 1 || execute_grade < 1)
    {
        std::cout << "EEEEEE\n";
        throw(GradeTooHighException());
    }
    else if (sign_grade > 150 || execute_grade > 150)
    {
        std::cout << "EEEEEE\n";
        throw(GradeTooLowException());
    }
    if(B.getGrade() < 1)
    {
        std::cout << "EEEEEE\n";
        throw(GradeTooHighException());
    }
    else if (B.getGrade() > 150)
    {
        std::cout << "EEEEEE\n";
        throw(GradeTooLowException());
    }


    this->is_signed = true;
}

int Form::getEGrade(void)
{
    return (this->execute_grade);
}

int Form::getSGrade(void)
{
    return (this->sign_grade);
}

std::string Form::getName(void) const
{
    return (this->name);
}

void    Form::execute(Bureaucrat const & executor) const 
{
    if(executor.getGrade() < 1)
    {
        std::cout << "EEEEEE\n";
        throw(GradeTooHighException());
    }
    else if(executor.getGrade() > 150)
    {
        std::cout << "EEEEEE\n";
        throw(GradeTooLowException());
    }
    if (is_signed)
        std::cout << "Form : " << this->name << " executed " << executor.getName() << '\n';
    else
        std::cout << "Form : The form is not signed\n";
}