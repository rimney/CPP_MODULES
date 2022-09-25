/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:46:26 by rimney            #+#    #+#             */
/*   Updated: 2022/09/26 00:07:19 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
                    if(num <= index && num > 0)
                    {
                        display_contact(num - 1);
                        input.clear();
                        break;
                    }
                    else
                    {
                        std::cout << num << " Out Of Range\n";
                        input.clear();
                    }
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
        if(!ft_is_digit(input))
        {
            std::cout << "Please Enter A Valid Phone Number\n";
            input.clear();
        }
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
}

void	Phonebook::display_prompt(void)
{
	std::string input;
	while(1)
	{
		std::cout << "Pease Enter One Of These Command \" ADD, SEARCH, EXIT\" : ";
	    std::cin >> input;
        if(input[0] == 0)
            std::exit(0);
		if(input == "ADD")
			add_contact();
		if(input == "SEARCH")
			search();
		if(input == "EXIT")
			break;
	}
}


int main()
{
    Phonebook p;

    p.display_prompt();
}