# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 07:33:16 by jhusso            #+#    #+#              #
#    Updated: 2023/10/09 07:33:24 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Harl
CC := c++
FLAGS := -std=c++98 -Wall -Wextra -Werror -g
SRC := main.cpp
OBJ := $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(COMPILE_FLAGS) $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $(COMPILE_FLAGS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
