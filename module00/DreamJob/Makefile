SRC = Account.cpp tests.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = account

HEADER = ./Account.hpp

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