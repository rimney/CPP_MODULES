/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:38:50 by rimney            #+#    #+#             */
/*   Updated: 2022/09/25 01:33:49 by rimney           ###   ########.fr       */
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

// std::string set_10c(std::string input)
// {
//     std::string ret;
//     int i;

//     i = 0;
//     while (input[i] && i < 10)
//     {
//         ret[i] = input[i];
//         i++;
//     }
//     ret[i] = 0;
//     std::cout << ret;
//     return (ret);
// }

// void	Contact::set_first_name(std::string fname)
// {
// 	int i = fname.length();
//     std::cout << i << std::endl;
// }

void    display_10_C(std::string input)
{
    int i;

    i = 0;
    if(input.length() > 10)
    {
        while(i < 9)
            std::cout << input[i++];
        std::cout << ".";
        return ;
    }
    std::cout << std::setw(10 - input.length() + 1);
    while(input[i])
    {
        std::cout << input[i];
        i++;
    }
}

int ft_is_digit(std::string input)
{
    int i = 0;
    while(input[i])
    {
        if(!std::isdigit(input[i]))
            return (0);
        i++;
    }
    return (1);
}

void       Phonebook::display_contact(int index)
{
    std::cout << "\n<---------------------PHONEBOOK--------------------->\n";
    std::cout << "<------>First Name : " << t[index].get_first_name() << std::endl;
    std::cout << "<------>Last Name : " << t[index].get_last_name() << std::endl;
    std::cout << "<------>Phone Number : " << t[index].get_phone_number() << std::endl;
    std::cout << "<------>NickName : " << t[index].get_nick_name() << std::endl;
    std::cout << "<------>Darkest Secret : " << t[index].get_darkest_secret() << std::endl;
    std::cout << "<---------------------PHONEBOOK--------------------->\n";
}

void	Phonebook::search(void)
{
	int i = 0;
    int num;
    int flag = 0;
    std::string input;
    while(1)
    {
        i = 0;
        if(index >= 1)
        {
            std::cout << "|----------|----------|----------|----------|\n";
            std::cout << "|index     |First Name|Last Name |Nickname  |\n";
            while(i < index_save)
            {
                std::cout << "|----------|----------|----------|----------|\n";
                std::cout << "|" << std::setw(10) << i + 1 << "|";
                display_10_C(t[i].get_first_name());
                std::cout << "|";
                display_10_C(t[i].get_last_name());
                std::cout << "|";
                display_10_C(t[i].get_nick_name());
                std::cout << "|\n";
                std::cout << "|----------|----------|----------|----------|\n";
                i++;
            }
            while(1)
            {
                if(!flag)
                {
                    getline(std::cin, input);
                    input.clear();
                    flag = 1;
                }
                while(input.empty())
                {
                    
                        std::cout << "Please Enter The Index Or EXIT : ";
                    getline(std::cin, input);
                    if(std::cin.eof())
                        std::exit(0);
                    
                }
                if(ft_is_digit(input) && !input.empty())
                {
                    num = atoi(input.c_str()); // HERE\n
                    if(num <= index)
                    {
                        display_contact(num - 1);
                        input.clear();
                        break;
                    }
                    else
                        std::cout << num << " Out Of Range\n";
                }
                else if(input == "EXIT")
                {
                    std::cout << "\n";
                    return ;
                }
                else
                    input.clear();
            }
        }
        else
        {
            std::cout << "You Must Have At Least One User\n";
            break;
        }
    }
}

void	Phonebook::add_contact(void)
{
	std::string input;

    if(index > 7)
         index = 0;

    getline(std::cin, input);
    input.clear();
    while (input.empty())
    {
        std::cout << "Enter First Name : ";
	    getline(std::cin, input);
        if(std::cin.eof())
            std::exit(0);
		Phonebook::t[index].set_first_name(input);
    }
    input.clear();
    while(input.empty())
    {
	    std::cout << "Enter Last Name : ";
        getline(std::cin, input);
        if(std::cin.eof())
            std::exit(0);
		Phonebook::t[index].set_last_name(input);
    }
    input.clear();
    while(input.empty())
    {
        std::cout << "Enter Phone Number : ";
	    getline(std::cin, input);
        if(std::cin.eof())
            std::exit(0);
		Phonebook::t[index].set_phone_number(input);
    }
    input.clear();
    while(input.empty())
    {
        std::cout << "Enter Nickname : ";
	    getline(std::cin, input);
        if(std::cin.eof())
            std::exit(0);
		Phonebook::t[index].set_nick_name(input);
    }
    input.clear();
    while(input.empty())
    {
        std::cout << "Enter Darkest Secret : ";
	    getline(std::cin, input);
        if(std::cin.eof())
            std::exit(0);
		Phonebook::t[index].set_darkest_secret(input);	
    }
    input.clear();
    index += 1;
    index_save += 1;
    if(index_save > 8)
        index_save = 8;
	// if(index_save > 7)
    //     index = 8;
}

void	Phonebook::display_prompt(void)
{
	std::string input;
	while(1)
	{
		std::cout << "Pease Enter One Of These Command \" ADD, SEARCH, EXIT\" : ";
		std::cin >> input;
		if(input == "ADD")
		{
			add_contact();
		}
		if(input == "SEARCH")
		{
			search();
			// std::cout << index;
			// std::cout << t[index - 1].get_first_name();
			// break;
		}
		if(input == "EXIT")
			break;
	}
}

// void    Phonebook::add_number()