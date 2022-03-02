# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltafah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:10:46 by iltafah           #+#    #+#              #
#    Updated: 2021/11/28 20:12:23 by iltafah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
Bureaucrat.cpp

HEADERS = Bureaucrat.hpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $^

%.o: %.cpp $(HEADERS)
	clang++ -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
