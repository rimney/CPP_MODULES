# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <rimney@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 21:24:55 by rimney            #+#    #+#              #
#    Updated: 2022/11/13 01:46:21 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract_class
SRCS = Animal.cpp      Brain.cpp       WrongAnimal.cpp cat.cpp         dog.cpp         main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all