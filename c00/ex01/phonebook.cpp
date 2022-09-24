/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 04:16:07 by rimney            #+#    #+#             */
/*   Updated: 2022/09/24 01:39:41 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void  phonebook::ft_display_prompt(void)
{
    Contact C;
    while(1)
    {
        std::string input;
        std::cout << "Hi Plase Enter One Of This Commands > ADD, SEARCH, EXIT : ";
        getline(std::cin, input);
        if(input == "ADD")
            add_number();
        if(input == "SEARCH")
            search();
        if(input == "EXIT")
            break ;
    }
}





int main()
{
    phonebook p;
    p.ft_display_prompt();
    // p.add_number();
}