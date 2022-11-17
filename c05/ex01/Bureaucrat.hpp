/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:20:48 by rimney            #+#    #+#             */
/*   Updated: 2022/11/17 00:39:30 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

#include "Form.hpp"
class Form;

class Bureaucrat
{
    private :
        const std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(const std::string name);
        Bureaucrat(const Bureaucrat & B);
        Bureaucrat(int grade);
        Bureaucrat(int grade, const std::string name);
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat & operator=(const Bureaucrat &B);
        int          getGrade(void) const;
        std::string getName(void) const ;
        void    incrementBureaucrat(void);
        void    decrementBureaucrat(void);
        class   GradeTooHighException : public std::exception
        {
            public :
                const char * what() const throw () // <--- This
            {
                return "Error : Grade is High";
            }
        };
        class   GradeTooLowException : public std::exception
        {
            public :
                const char * what() const throw () // <--- This
            {
                return "Error : Grade is Low";
            }
        };
        void    signForm(Form & F);
        
};

std::ostream & operator<<(std::ostream & op, const Bureaucrat & B);

#endif