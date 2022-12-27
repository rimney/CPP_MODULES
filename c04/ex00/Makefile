# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <rimney@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 21:24:55 by rimney            #+#    #+#              #
#    Updated: 2022/11/14 21:41:05 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
SRCS = Animal.cpp WrongAnimal.cpp cat.cpp dog.cpp WrongCat.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)
clean :
	rm -f $(NAME)
fclean :
	rm -f $(NAME)
re : fclean all