# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltafah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:10:46 by iltafah           #+#    #+#              #
#    Updated: 2021/12/09 14:14:18 by iltafah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
Cast.cpp

OBJ = $(SRC:%.cpp=%.o)

HDRS = Cast.hpp

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $^

%.o: %.cpp $(HDRS)
	c++ -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
