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

SRC_DIR = src/
_SRC =	main.cpp\
		MateriaSource.cpp\
		AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp

SRC = $(addprefix $(SRC_DIR), $(_SRC))

INC_DIR = inc/
HEADER=	AMateria.hpp\
		IMateriaSource.hpp\
		MateriaSource.hpp\
		ICharacter.hpp\
		Character.hpp\
		Cure.hpp\
		Ice.hpp

INC = $(addprefix $(INC_DIR), $(HEADER))

NAME = materia

OBJ_DIR = obj/
_OBJ = $(_SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(_OBJ))

.PHONY: all clean fclean re run

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ): $(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC) ./Makefile | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

run:
	./$(NAME) | cat -e

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME).dSYM

re: fclean all
