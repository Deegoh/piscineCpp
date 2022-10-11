CC = c++
ifeq ($(shell uname), Linux)
	CC = g++
else
	CC = g++-12
endif
RM = rm -rf
CFLAGS = -Werror -Wall -Wextra -std=c++98
CFLAGS += -pedantic
CFLAGS += -g -fsanitize=address
SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp
HEADER=	ClapTrap.hpp\
		ScavTrap.hpp\
		FragTrap.hpp
NAME = fragtrap

OBJ_DIR = obj/
_OBJ = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(_OBJ))

.PHONY: all clean fclean re run

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ): $(OBJ_DIR)%.o : %.cpp $(HEADER) ./Makefile | $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

run:
	./$(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME).dSYM

re: fclean all
