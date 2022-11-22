SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror

NAME = brain

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