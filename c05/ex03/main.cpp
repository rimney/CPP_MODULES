/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:34:24 by rimney            #+#    #+#             */
/*   Updated: 2022/11/25 18:49:55 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "intern.hpp"

int main()
{
    Intern someRandomIntern;

    Form* rrf;
    try
    {
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    }
    catch(std::exception & e)
    {

        std::cerr << e.what() << std::endl;
    }
    // catch (std::string error_msg)
    // {
    //     std::cerr << error_msg << std::endl;
    // }
    // system("Leaks coffee_making");
    return 0;
}