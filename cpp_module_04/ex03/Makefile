# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 06:52:46 by jhusso            #+#    #+#              #
#    Updated: 2023/12/05 09:50:26 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := play
CC := c++
FLAGS := -std=c++98 -Wall -Wextra -Werror
SRC := main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp Trash.cpp
OBJ := $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Executable: ./$(NAME)"
	@$(CC) -o $(NAME) $(FLAGS) $(OBJ)

$(OBJ): $(SRC)
	@$(CC) -c $(FLAGS) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
