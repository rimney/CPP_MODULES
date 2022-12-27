# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <rimney@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 18:20:43 by rimney            #+#    #+#              #
#    Updated: 2022/11/25 22:00:16 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form_up_maggots!
SRCS = Bureaucrat.cpp main.cpp Form.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all