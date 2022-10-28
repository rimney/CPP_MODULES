# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <rimney@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 08:22:26 by rimney            #+#    #+#              #
#    Updated: 2022/10/09 14:40:40 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_Brainz
CC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp   Zombie.cpp zombieHorde.cpp
all :
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : clean all

