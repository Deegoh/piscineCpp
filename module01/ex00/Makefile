CC = c++
CC = g++-12
RM = rm -rf
CFLAGS = -Werror -Wall -Wextra -std=c++98
CFLAGS += -pedantic
CFLAGS += -g -fsanitize=address
SRC =	main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp
HEADER=	Zombie.hpp
NAME = brainz

OBJ_DIR = obj/
_OBJ = $(SRC:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(_OBJ))

.PHONY: all clean fclean re run

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
	$(RM) $(NAME).dSYM

run:
	./$(NAME)

re: fclean all
