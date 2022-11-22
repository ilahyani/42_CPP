SRC = Account.cpp tests.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = account

HEADER = ./Account.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADER)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HEADER)
			$(CC) (CPPFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all