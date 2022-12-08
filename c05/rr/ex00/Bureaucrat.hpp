/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:20:48 by rimney            #+#    #+#             */
/*   Updated: 2022/11/16 01:52:04 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

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
        
};

std::ostream & operator<<(std::ostream & op, const Bureaucrat & B);

#endif