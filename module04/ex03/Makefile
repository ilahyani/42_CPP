SRC = main.cpp AMateria.cpp ICharacter.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = interface

HEADERS = AMateria.hpp ICharacter.hpp

all:	$(NAME)

$(NAME): $(OBJ) $(HEADERS)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all