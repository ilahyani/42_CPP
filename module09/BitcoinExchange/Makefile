SRC = main.cpp parse_data.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = btc

HEADERS = btc.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all