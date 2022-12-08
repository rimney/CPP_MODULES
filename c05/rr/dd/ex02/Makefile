# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <rimney@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 03:35:19 by rimney            #+#    #+#              #
#    Updated: 2022/11/18 03:36:25 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = No__you-need_form_28B,_not_28C...
SRCS = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp  art.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all