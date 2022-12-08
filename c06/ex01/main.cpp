/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:20:53 by rimney            #+#    #+#             */
/*   Updated: 2022/11/29 22:25:22 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    uintptr_t a;
    Data    *data = new Data();

    data->data = 11;
    std::cout << data->data << std::endl;
    std:: cout << data << std::endl;
    a = serialize(data);
    std:: cout << a << std::endl;
    data = deserialize(a);
    std:: cout << data << std::endl;
    std:: cout << data->data << std::endl;

    return 0;
}