/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:10:47 by rimney            #+#    #+#             */
/*   Updated: 2022/11/17 23:25:47 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private :
        const   std::string name;
        bool    is_signed;
        const   int     sign_grade;
        const   int     execute_grade;
    public :
        Form();
        Form(std::string name, const int sign_grade, const int execute_grade);
        Form(Form & F);
        Form & operator=(Form const & F);
        ~Form();
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
        std::string getName(void);
        void        beSigned(Bureaucrat B);
        int         getEGrade(void);
        int         getSGrade(void);
        
};

#endif