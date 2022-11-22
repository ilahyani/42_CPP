SRC = main.cpp Harl.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address

NAME = harlFilter

HEADER = ./Harl.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADER)
			$(CC) $(CPPFLAGS) $(OBJ) -std=c++98 -o $(NAME)

%.o: %.cpp	$(HEADER)
			$(CC) $(CPPFLAGS) -std=c++98 -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all