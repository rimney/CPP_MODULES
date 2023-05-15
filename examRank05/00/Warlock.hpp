/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:13:23 by rimney            #+#    #+#             */
/*   Updated: 2023/05/14 18:27:39 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
    private :
        std::string name;
        std::string title;  
    public :
        Warlock(std::string const & n, std::string const & t);
        std::string const & getName(void) const;         
        std::string const & getTitle(void) const;
        void    setTitle(std::string const & title);
        void    introduce() const;
        ~Warlock();
};
