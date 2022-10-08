/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:42:51 by rimney            #+#    #+#             */
/*   Updated: 2022/10/09 00:18:45 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        std::string buffer;
        std::ifstream file (argv[1]);
        std::ofstream out;
        int pos;
    
        while(getline(file, buffer))
        {
            std::cout << buffer << std::endl;
            while((pos = buffer.find(argv[2], pos)) != std::string::npos)
            {
                pos += strlen(argv[2]);
                std::cout << "found it\n";
            }
        }
    }
    return (0);
}