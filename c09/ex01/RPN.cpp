/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:23:30 by rimney            #+#    #+#             */
/*   Updated: 2023/04/20 01:53:58 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string line)
{
	if(line.empty() || !isdigit(line[0]))
	{
		std::cerr << "Error\n";
		exit(1);
	}
	for(size_t i = 0; i < line.size(); i++)
	{
		int res = 0;
		if(line[i] == ' ' || line[i] == '\t')
			continue;
		else if(isdigit(line[i]))
			this->s.push(line[i] - '0');
		else if(line[i] == '/'|| line[i] == '+' || line[i] == '-' || line[i] == '*')
		{
			// if(this->s.size() != 2)
			// {
			// 	std::cerr << "Error\n";
			// 	exit(1);
			// }
			int a;
			int b;

			b = this->s.top();
			this->s.pop();
			if(this->s.size())
			{
				a = this->s.top();
				this->s.pop();
			}
			if(line[i] == '+')
				res = a + b;
			else if(line[i] == '-')
				res = a - b;
			else if(line[i] == '*')
				res = a * b;
			else if(line[i] == '/')
				res = a / b;				
			this->s.push(res);
		}
		else
		{
			std::cerr << "Unknown charracter [" << line[i] << "]\n";
			exit(1);
		}
	}
	if(this->s.size() > 1)
	{
		std::cerr << "Error\n";
		exit(1);
	}
	std::cout << this->s.top() << std::endl;
}