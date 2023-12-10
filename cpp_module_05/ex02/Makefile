NAME := wrong_form
CC := c++
FLAGS := -std=c++98 -Wall -Wextra -Werror
SRC := main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp
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
