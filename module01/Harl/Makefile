SRC = main.cpp Harl.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

NAME = zombie

HEADER = ./Harl.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADER)
			$(CC) $(CFLAGS) $(OBJ) -std=c++98 -o $(NAME)

%.o: %.c	$(HEADER)
			$(CC) (CFLAGS) -std=c++98 -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all