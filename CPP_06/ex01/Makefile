# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltafah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:10:46 by iltafah           #+#    #+#              #
#    Updated: 2021/12/08 22:02:54 by iltafah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)

HDRS = Data.hpp

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
