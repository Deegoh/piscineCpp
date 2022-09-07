CC = c++
CC = g++-12
CFLAGS = -Werror -Wall -Wextra -std=c++98
CFLAGS += -pedantic
CFLAGS += -g -fsanitize=address
SRC =	main.cpp\
		PhoneBook.cpp\
		Contact.cpp
NAME = phonebook

OBJ_DIR = obj/
_OBJ = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(_OBJ))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ): $(OBJ_DIR)%.o : %.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -rf $(OBJ_DIR)

fclean: clean
	$(RM) -rf $(NAME)

re: fclean all
