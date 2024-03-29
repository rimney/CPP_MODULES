/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:32:24 by rimney            #+#    #+#             */
/*   Updated: 2022/11/17 23:38:32 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form f("form", 150, 150);
        Bureaucrat b("bureaucrat", 11);
        std::cout << b;
        b.signForm(f);
        f.beSigned(b);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}