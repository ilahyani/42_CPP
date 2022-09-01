SRC = phonebook.cpp add.cpp search.cpp utils.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror

NAME = phonebook

HEADER = ./phonebook.hpp

all:	$(NAME)

$(NAME): $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -std=c++98 -o $(NAME)

%.o: %.c	$(HEADER)
			$(CC) (CFLAGS) -std=c++98 -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all