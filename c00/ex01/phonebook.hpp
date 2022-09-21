/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 03:46:11 by rimney            #+#    #+#             */
/*   Updated: 2022/09/21 23:35:48 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    public :
        void ft_add_contact(int index);
        void ft_display_contact(void);
    private :
        std::string first_name;
        std::string last_name;
        std::string dakest_secret;
        std::string phone_number;
        std::string nick_name;
        int         index;
};

void Contact::ft_add_contact(int index)
{
    std::cout << "Please Enter Fisrt Name : " << std::endl;
    Contact::index = index;
    std::cin >> Contact::first_name;
    std::cout << "Please Enter Last Name : " << std::endl;
    std::cin >> Contact::last_name;
    std::cout << "Please Enter Phone Number : " << std::endl;
    std::cin >> Contact::phone_number;
    std::cout << "Please Enter Nick Name : " << std::endl;
    std::cin >> Contact::nick_name;
}

void Contact::ft_display_contact()
{
    std::cout << "Index     |First Name|Last Name |Nick name |" << std::endl;
    std::cout << Contact::index;
}           


class phonebook
{
    public :
        Contact t[8];
        int index = 0;
        void add_number();
        void    display_number();
};

void phonebook::add_number()
{
    int index_save;

    index_save = index + 1;
    if (index < 8)
        t[index++].ft_add_contact(index_save);
    index %= 8;
}

void phonebook::display_number()
{
    for (int i = 0; i < index; i++)
        t[i].ft_display_contact();
    
}

#endif