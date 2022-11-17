/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:07:22 by rimney            #+#    #+#             */
/*   Updated: 2022/11/17 00:31:24 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream & operator<<(std::ostream & op, const Bureaucrat & B)
{
    op << B.getName() << " : Bureaucrat grade : " << B.getGrade() << '\n';
    return op;
}

Bureaucrat::Bureaucrat() : name("Bureaucrat")
{
    std::cout << "Bureaucrat Default constructor called\n";
    this->grade = 0;
}

Bureaucrat::Bureaucrat(const std::string name) : name(name)
{
    std::cout << "Bureaucrat Paramitrized Constructor Called\n";
    this->grade = 0;
}

Bureaucrat::Bureaucrat(int grade)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    std::cout << "Bureaucrat Int Constuctor Called\n";
    this->grade = grade;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    std::cout << "Bureaucrat Paramitrized constructor called\n";
    this->grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :  name(name)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 250)
        throw(Bureaucrat::GradeTooLowException());
    std::cout << "Bureaucrat Paramitrized constructor called\n";
    this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called\n";
}

int Bureaucrat::getGrade(void) const 
{
    return (this->grade);
}

std::string Bureaucrat::getName(void) const 
{
    return (this->name);
}

void    Bureaucrat::incrementBureaucrat(void)
{

    if (grade  < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    this->grade -= 1; // must set expeptions
}

void    Bureaucrat::decrementBureaucrat(void)
{
    this->grade += 1; // must set expeptions
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

 Bureaucrat::Bureaucrat(const Bureaucrat & B) : name(B.name) 
 {
    *this = B;
    std::cout << "copy constructor called\n";
 }

 Bureaucrat & Bureaucrat::operator=(const Bureaucrat &B)
{
    this->grade = B.grade;
    std::cout << "Copy assigment overload called\n";
    return *this;
 }

void   Bureaucrat::signForm(Form & F)
{
   try
   {
        F.beSigned(*this);
        std::cout << this->name << " Signed " << F.getName();
    }
    catch(const std::exception& e)
   {
        std::cerr << this->name << "Couldn't Sign due to ";
        std::cerr << e.what() << '\n';
   }    
}