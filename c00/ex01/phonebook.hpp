/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 03:46:11 by rimney            #+#    #+#             */
/*   Updated: 2022/09/23 22:49:24 by rimney           ###   ########.fr       */
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
        void    set_first_name(std::string fname) {first_name = fname;}
        void    set_last_name(std::string lname) {last_name = lname;}
        void    set_nick_name(std::string nname) {nick_name = nname;}
        void    set_darkest_secret(std::string ds) {darkest_secret = ds;}
        void    set_phone_number(std::string pn) {phone_number = pn;}
        std::string getFname() {return first_name;}
        std::string getLname() {return last_name;}
        std::string getPn() {return phone_number;}
        std::string getDs() {return darkest_secret;}
        std::string getNname() {return nick_name;}
    
        private :
        std::string first_name;
        std::string last_name;
        std::string darkest_secret;
        std::string phone_number;
        std::string nick_name;
        int         index;

};

class phonebook
{
    public :
        Contact t[8];
        int     index = 0;
        void    ft_display_prompt();
        void    search(void);
        void    add_number();
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
    std::string input;
    Contact::index = index;
    std::cout << "Please Enter Fisrt Name : " << std::endl;
    std::cin >> Contact::first_name;
    std::cout << "Please Enter Last Name : " << std::endl;
    std::cin >> Contact::last_name;
    std::cout << "Please Enter Phone Number : " << std::endl;
    std::cin >> Contact::phone_number;
    std::cout << "Please Enter Nick Name : " << std::endl;
    std::cin >> Contact::nick_name;
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
                std::cout << "|" << index << std::setw(10) << "|" << t[index].getFname() << "\n";
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