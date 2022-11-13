SRC = main.cpp PhoneBook.cpp utils.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

HEADER = ./PhoneBook.hpp

all:	$(NAME)

$(NAME): $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c	$(HEADER)
			$(CC) (CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all