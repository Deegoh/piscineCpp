CC = c++
CC = g++-12
RM = rm -rf
CFLAGS = -Werror -Wall -Wextra -std=c++98
CFLAGS += -pedantic
CFLAGS += -g -fsanitize=address
SRC =	main.cpp\
		PhoneBook.cpp\
		Contact.cpp
HEADER =	PhoneBook.hpp\
			Contact.hpp
NAME = phonebook

OBJ_DIR = obj/
_OBJ = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(_OBJ))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ): $(OBJ_DIR)%.o : %.cpp $(HEADER) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
