/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:34:24 by rimney            #+#    #+#             */
/*   Updated: 2022/11/25 03:28:23 by rimney           ###   ########.fr       */
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
    // try
    // {
    //     RobotomyRequestForm f("home",  25, 5); // gotta set a param constructor that sets data to the form pv grade >>>> !
    //     Bureaucrat b("bureaucrat", 25);
    //     std::cout << f.getEGrade() << std::endl;
    //     b.signForm(f);
    //     // f.execute(b);

    // }

        Intern someRandomIntern;
        Form* rrf;
    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (std::string error_msg)
    {
        std::cerr << error_msg << std::endl;
    }

    return 0;
}