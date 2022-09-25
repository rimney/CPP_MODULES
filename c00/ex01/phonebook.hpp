/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:38:50 by rimney            #+#    #+#             */
/*   Updated: 2022/09/25 22:08:24 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Contact
{
    public:
        void    set_first_name(std::string fname) {first_name = fname;}
        void    set_last_name(std::string lname) {last_name = lname;}
        void    set_nick_name(std::string nname) {nick_name = nname;}
        void    set_darkest_secret(std::string ds) {darkest_secret = ds;}
        void    set_phone_number(std::string pn) {phone_number = pn;}
        std::string get_first_name() {return first_name;}
        std::string get_last_name() {return last_name;}
        std::string get_phone_number() {return phone_number;}
        std::string get_darkest_secret() {return darkest_secret;}
        std::string get_nick_name() {return nick_name;}
    private :
        std::string first_name;
        std::string last_name;
        std::string darkest_secret;
        std::string phone_number;
        std::string nick_name;
};

class Phonebook
{
	public:
		void    display_prompt();
		void    search();
		void    add_contact();  
        void    display_contact(int num);
    private:
        int index;
        int index_save;
        Contact t[8];
};












