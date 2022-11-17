/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:08:46 by rimney            #+#    #+#             */
/*   Updated: 2022/11/16 01:56:13 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("laarbi", 146);

        std::cout << b.getName() << std::endl;
        std::cout << b.getGrade() << std::endl;
       
        Bureaucrat c;
        c = b;

        std::cout << c.getName() << std::endl;
        std::cout << c.getGrade() << std::endl;
        std::cout << b.getGrade() << '\n';
        std::cout << b;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}