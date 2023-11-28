# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 08:53:15 by jhusso            #+#    #+#              #
#    Updated: 2023/11/28 10:37:35 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := animal
CC := c++
FLAGS := -std=c++98 -Wall -Wextra -Werror -g
SRC := main.cpp Animal.cpp Dog.cpp
OBJ := $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(FLAGS) $(OBJ)

$(OBJ): $(SRC)
	@$(CC) -c $(FLAGS) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
