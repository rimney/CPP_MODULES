/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney < rimney@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:23:30 by rimney            #+#    #+#             */
/*   Updated: 2023/04/07 16:53:28 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string line)
{
	for(size_t i = 0; i < line.size(); i++)
	{
		int res = 0;
		if(line[i] == ' ' || line[i] == '\t')
			continue;
		else if(isdigit(line[i]))
			this->s.push(line[i] - '0');
		else if(line[i] == '/'|| line[i] == '+' || line[i] == '-' || line[i] == '*')
		{
			int a;
			int b;

			b = this->s.top();
			this->s.pop();
			a = this->s.top();
			this->s.pop();
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
	std::cout << this->s.top() << std::endl;
}