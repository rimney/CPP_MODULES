/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:34:24 by rimney            #+#    #+#             */
/*   Updated: 2022/11/23 23:32:33 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        PresidentialPardonForm f("home",  25, 5); // gotta set a param constructor that sets data to the form pv grade >>>> !
        Bureaucrat b("bureaucrat", 25);
        std::cout << f.getEGrade() << std::endl;
        b.signForm(f);
        // f.execute(b);

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