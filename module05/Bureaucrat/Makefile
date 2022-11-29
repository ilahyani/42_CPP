SRC = main.cpp Bureaucrat.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = Bureaucrat

HEADERS = Bureaucrat.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all