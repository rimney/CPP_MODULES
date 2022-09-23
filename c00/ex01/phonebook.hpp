/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 03:46:11 by rimney            #+#    #+#             */
/*   Updated: 2022/09/23 07:36:14 by rimney           ###   ########.fr       */
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
        void search_number(void);
    private :
        std::string first_name;
        std::string last_name;
        std::string dakest_secret;
        std::string phone_number;
        std::string nick_name;
        int         index;
};

class phonebook
{
    public :
        Contact t[8];
        int index = 0;
        void ft_display_prompt();
        void    search(void);
        void add_number();
        void    display_number();
        void    exit_program();
};



void Contact::search_number()
{
    std::cout << "Index     |First Name|Last Name |Nick name |" << std::endl;
    
    std::cout << Contact::index;
    
}      
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
    search_number();
}

     



void phonebook::search()
{
    int i = 0;
    std::string input;
    while(1)
    {
        if(index >= 1)
        {
            std::cout << "|----------|----------|----------|----------|\n";
            std::cout << "|index     |First Name|Last Name |Nickname  |\n";
            while(i < index)
            {
                std::cout << "|----------|----------|----------|----------|\n";
                std::cout << "|" << index << std::setw(11) << "|" << t[index].first_name << "\n";
                i++;
            }
            break;
        }
        else
        {
            std::cout << "not ARGS\n";
            break;
        }
    }
    
}

void phonebook::add_number()
{
    int index_save;

    index_save = index + 1;
    if (index < 8)
        t[index++].ft_add_contact(index_save);
    std::cout << index_save << "index << \n" ;
    index %= 8;
}

void phonebook::display_number()
{
    for (int i = 0; i < index; i++)
        t[i].search_number();
}

#endif