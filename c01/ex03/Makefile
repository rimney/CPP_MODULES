# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <rimney@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 08:22:26 by rimney            #+#    #+#              #
#    Updated: 2022/10/09 14:42:21 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human
CC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
SRCS = HumanA.cpp  HumanB.cpp  Weapon.cpp  main.cpp 
all :
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : clean all

