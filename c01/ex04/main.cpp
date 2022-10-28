/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:42:51 by rimney            #+#    #+#             */
/*   Updated: 2022/10/09 15:32:24 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        std::string buffer;
        std::ifstream file (argv[1]);
        std::ofstream out;
        std::string out_name = argv[1];
        int pos;
        if(!file)
        {
            std::cout << "Cannot open the file !\n";
            std::exit(0);
        }
        out.open(out_name + ".replace");
        if(strlen(argv[2]) > 0 && strlen(argv[3]) > 0)
        {
            while(getline(file, buffer))
            {
                pos = 0;
                while((const unsigned long)(pos = buffer.find(argv[2], pos)) != std::string::npos)
                {
                    buffer.erase(pos, strlen(argv[2]));
                    buffer.insert(pos, argv[3]);
                    pos += strlen(argv[3]);
                }
            out << buffer;
            out << "\n";
            }
        }
        out.close();
    }
    return (0);
}