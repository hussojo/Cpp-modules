# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 11:47:05 by jhusso            #+#    #+#              #
#    Updated: 2023/10/20 07:11:02 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook
CC := c++
FLAGS := -std=c++98 -Wall -Wextra -Werror -g
SRC := main.cpp PhoneBook.cpp Contact.cpp
OBJ := $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(FLAGS) $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $(FLAGS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
