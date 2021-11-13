# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltafah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:10:46 by iltafah           #+#    #+#              #
#    Updated: 2021/11/13 15:43:34 by iltafah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = kingdom

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
Animal.cpp \
Dog.cpp \
Cat.cpp \
WrongAnimal.cpp \
WrongCat.cpp

HEADERS = Animal.hpp \
Dog.hpp \
Cat.hpp \
WrongAnimal.hpp \
WrongCat.hpp

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
