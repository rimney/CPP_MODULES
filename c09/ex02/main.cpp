/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:24:29 by rimney            #+#    #+#             */
/*   Updated: 2023/04/26 11:36:05 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<std::string> buffer;

	if(argc < 2)
	{
		std::cerr << "Error\n";
		return (1);
	}
	for(size_t i = 1; i < argc; i++)
		buffer.push_back(argv[i]);
	PmergeMe A(buffer);
}