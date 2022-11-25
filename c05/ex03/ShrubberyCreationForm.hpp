/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 01:33:31 by rimney            #+#    #+#             */
/*   Updated: 2022/11/24 00:24:53 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    private :
        std::string target;
    public : 
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name, const int sign_grade, const int execute_grade);
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        std::string getTarget(void) const ;
        void    setTarget(std::string T);
        void    drawTree(std::string target);
};

#endif