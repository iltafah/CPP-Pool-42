# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iltafah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:10:46 by iltafah           #+#    #+#              #
#    Updated: 2021/11/12 10:19:12 by iltafah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp \
	Contact.cpp \
	PhoneBook.cpp 

HEADERS = PhoneBook.hpp \
Contact.hpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $^ -std=c++98

%.o: %.cpp $(HEADERS)
	clang++ -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
