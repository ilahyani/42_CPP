SRC = main.cpp Span.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = Span

HEADER = Span.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADER)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HEADER)
			$(CC) $(CPPFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all