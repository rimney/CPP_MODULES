/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:15:46 by rimney            #+#    #+#             */
/*   Updated: 2022/11/24 23:16:34 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    private :
        std::string target;
    public : 
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name, const int sign_grade, const int execute_grade);
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        std::string getTarget(void) const ;
        void    setTarget(std::string T);
        
};

#endif