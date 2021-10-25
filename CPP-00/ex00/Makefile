# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltafah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:10:46 by iltafah           #+#    #+#              #
#    Updated: 2021/10/25 14:28:54 by iltafah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $^

%.o: %.c
	clang++ -c $< -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
