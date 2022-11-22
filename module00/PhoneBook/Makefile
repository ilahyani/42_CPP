SRC = main.cpp PhoneBook.cpp utils.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

HEADER = ./PhoneBook.hpp

all:	$(NAME)

$(NAME): $(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HEADER)
			$(CC) (CPPFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re: fclean all