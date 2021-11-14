# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltafah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:10:46 by iltafah           #+#    #+#              #
#    Updated: 2021/11/14 15:21:37 by iltafah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
Zombie.cpp \
ZombieHorde.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $^

%.o: %.cpp
	clang++ -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
